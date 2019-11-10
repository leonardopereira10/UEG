#ifndef REMOVE_PROFESSOR_H
#define REMOVE_PROFESSOR_H

#include <QWidget>
#include "professor.h"
#include "mainwindow.h"


namespace Ui {
class remove_professor;
}

class remove_professor : public QWidget
{
    Q_OBJECT

public:
    explicit remove_professor(QWidget *parent = nullptr);
    ~remove_professor();


private slots:
    void on_radio_cpf_clicked();

    void on_radio_nome_clicked();

    void on_campo_busca_returnPressed();

    void on_pushButton_clicked();


    void on_tableView_doubleClicked(const QModelIndex &index);

private:
    Ui::remove_professor *ui;
};

#endif // REMOVE_PROFESSOR_H
