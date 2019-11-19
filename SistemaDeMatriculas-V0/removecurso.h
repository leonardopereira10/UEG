#ifndef REMOVECURSO_H
#define REMOVECURSO_H

#include "curso.h"
#include <QWidget>

namespace Ui {
class removeCurso;
}

class removeCurso : public QWidget
{
    Q_OBJECT

public:
    explicit removeCurso(QWidget *parent = 0);
    ~removeCurso();

private slots:
    bool validarCampos();   //metodo para validar os valores digitados    
    
    void on_pushButton_clicked();
    
    void on_lineEdit_returnPressed();
    
private:
    Ui::removeCurso *ui;
};

#endif // REMOVECURSO_H
