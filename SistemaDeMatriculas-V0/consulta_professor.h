#ifndef CONSULTA_PROFESSOR_H
#define CONSULTA_PROFESSOR_H

#include <QWidget>

namespace Ui {
class Consulta_professor;
}

class Consulta_professor : public QWidget
{
    Q_OBJECT

public:
    explicit Consulta_professor(QWidget *parent = nullptr);
    ~Consulta_professor();

private:
    Ui::Consulta_professor *ui;
};

#endif // CONSULTA_PROFESSOR_H
