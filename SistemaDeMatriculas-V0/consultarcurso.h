#ifndef CONSULTARCURSO_H
#define CONSULTARCURSO_H

#include <QWidget>
#include <QMessageBox>
#include "curso.h"

namespace Ui {
class ConsultarCurso;
}

class ConsultarCurso : public QWidget
{
    Q_OBJECT

public:
    explicit ConsultarCurso(QWidget *parent = 0);
    ~ConsultarCurso();

    bool validarCampos();

private slots:


    void on_lineEdit_returnPressed();

    void on_pushButton_clicked();

private:
    Ui::ConsultarCurso *ui;
};

#endif // CONSULTARCURSO_H
