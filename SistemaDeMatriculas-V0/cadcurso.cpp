#include "cadcurso.h"
#include "ui_cadcurso.h"

cadCurso::cadCurso(QWidget *parent) :
    QWidget(parent),
    janelaCadastro(new Ui::cadCurso)
{
    janelaCadastro->setupUi(this);
    janelaCadastro->labelValid->setAlignment(Qt::AlignCenter);

    if (QSqlDatabase::isDriverAvailable("QSQLITE")) {
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/home/samea/UEG/SistemaDeMatriculas-V0/bd/bdCurso");
        if (db.open()){
            query = new QSqlQuery(db);
        } else {
            qDebug()<<"cadCurso(): "<<db.lastError();
            janelaCadastro->labelValid->setText("falha ao abrir o banco de dados.");
        }
    } else {
        qDebug()<<"cadCurso(): "<<db.lastError();
        janelaCadastro->labelValid->setText("Driver SQLITE não disponível.");
    }
}

cadCurso::~cadCurso()
{
    delete janelaCadastro;
}

bool cadCurso::validarCampos()
{
    bool cont = true;

    if (janelaCadastro->campoNome->text().isEmpty() || janelaCadastro->boxDuracao->value() < 1)
        return !cont;
    return cont;
}

void cadCurso::on_campoNome_returnPressed()
{
    janelaCadastro->boxDuracao->setFocus();
}

void cadCurso::on_boxDuracao_editingFinished()
{
    janelaCadastro->btnCadastrar->setFocus();
}

void cadCurso::on_btnCadastrar_clicked()
{
    if (!validarCampos()) {
        janelaCadastro->labelValid->setText("* Não podem estar vazios");
    }
    else {
        janelaCadastro->labelValid->clear();
        Curso curso(janelaCadastro->campoNome->text(),
                    janelaCadastro->boxDuracao->value());

        if (enviarBd(&curso)){
            curso.setIdCurso(query->lastInsertId().toInt());
            janelaCadastro->campoIDCurso->setText(QString::number(curso.getIdCurso()));
        }
    }
    query->clear();
}

bool cadCurso::enviarBd(Curso *curso)
{
    query->clear();
    query->prepare("INSERT INTO cursos(nome,duracao) "
                   "VALUES (:nome,:duracao);");
    query->bindValue(":nome",curso->getNome());
    query->bindValue(":duracao", curso->getDuracao());
    return query->exec();
}
