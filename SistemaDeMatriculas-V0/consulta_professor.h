#ifndef CONSULTA_PROFESSOR_H
#define CONSULTA_PROFESSOR_H

#include <QWidget>
#include "PersistProfessor.h"
#include "professor.h"

namespace Ui {
class Consulta_professor;
}

class Consulta_professor : public QWidget
{
    Q_OBJECT

public:
    explicit Consulta_professor(QWidget *parent = nullptr);
    ~Consulta_professor();

private slots:
    void on_radio_cpf_clicked();

    void on_radio_nome_clicked();

    void on_pushButton_clicked();

private:
    Ui::Consulta_professor *ui;
};

#endif // CONSULTA_PROFESSOR_H
