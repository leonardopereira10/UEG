#ifndef CAD_PROFESSORES_H
#define CAD_PROFESSORES_H

#include <QDialog>
#include "pessoas.h"


namespace Ui {
class Cad_Professores;
}

class Cad_Professores : public QDialog, protected Pessoas
{
    Q_OBJECT

public:
    explicit Cad_Professores(QWidget *parent = nullptr);
    ~Cad_Professores();
    Cad_Professores();
    Cad_Professores (QString CPF, QString nome, QString endereco, QString setor,
                    QString cidade, QString estado, QString celular, QString email,
                    QString graducao, QString titulacao);

    QString getGraducao() const;
    void setGraducao(const QString &value);

    QString getTitulacao() const;
    void setTitulacao(const QString &value);

private:
    QString graducao, titulacao;
    Ui::Cad_Professores *ui;

};

#endif // CAD_PROFESSORES_H
