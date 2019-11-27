#ifndef LISTAR_PROFESSOR_H
#define LISTAR_PROFESSOR_H

#include <QWidget>
#include "professor.h"


namespace Ui {
class listar_professor;
}

class listar_professor : public QWidget
{
    Q_OBJECT

public:
    explicit listar_professor(QWidget *parent = nullptr);
    ~listar_professor();

private slots:
    void on_btn_listar_clicked();

private:
    Ui::listar_professor *ui;
};

#endif // LISTAR_PROFESSOR_H
