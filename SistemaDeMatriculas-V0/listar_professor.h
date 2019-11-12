#ifndef LISTAR_PROFESSOR_H
#define LISTAR_PROFESSOR_H

#include <QWidget>

namespace Ui {
class listar_professor;
}

class listar_professor : public QWidget
{
    Q_OBJECT

public:
    explicit listar_professor(QWidget *parent = nullptr);
    ~listar_professor();

private:
    Ui::listar_professor *ui;
};

#endif // LISTAR_PROFESSOR_H
