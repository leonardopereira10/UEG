#ifndef CAD_PROFESSOR_H
#define CAD_PROFESSOR_H

#include <QDialog>
#include <QPixmap>
#include "cpf.h"
#include "pessoa.h"

namespace Ui {
class cad_professor;
}

class cad_professor : public QDialog, protected Pessoa {
    Q_OBJECT

public:
    explicit cad_professor(QWidget *parent = nullptr);
    ~cad_professor();
    cad_professor(QString cpf, QString nome, QString endereco, QString estado, QString cidade, QString setor, QString celular, QString email,
                  QString graduacao, QString titulacao);


private slots:
    void on_btn_cancelar_clicked();

    void on_campo_nome_returnPressed();

private:
    Ui::cad_professor *ui;
    QString graduacao, titulacao;

};

#endif // CAD_PROFESSOR_H
