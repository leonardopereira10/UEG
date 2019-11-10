#ifndef REMOVE_PROFESSOR_H
#define REMOVE_PROFESSOR_H

#include <QWidget>

namespace Ui {
class remove_professor;
}

class remove_professor : public QWidget
{
    Q_OBJECT

public:
    explicit remove_professor(QWidget *parent = nullptr);
    ~remove_professor();

private:
    Ui::remove_professor *ui;
};

#endif // REMOVE_PROFESSOR_H
