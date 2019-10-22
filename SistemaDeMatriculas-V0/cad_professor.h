#ifndef CAD_PROFESSOR_H
#define CAD_PROFESSOR_H

#include <QDialog>
#include <QPixmap>
#include "cpf.h"
#include <professor.h>

namespace Ui {
class cad_professor;
}

class cad_professor : public QDialog{
    Q_OBJECT

public:
    explicit cad_professor(QWidget *parent = nullptr);
    ~cad_professor();



private slots:
    void on_btn_cancelar_clicked();

    void on_campo_nome_returnPressed();

    void on_btn_cadastrar_clicked();

private:
    Ui::cad_professor *ui;

};

#endif // CAD_PROFESSOR_H
