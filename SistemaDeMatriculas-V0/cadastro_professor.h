#ifndef CADASTRO_PROFESSOR_H
#define CADASTRO_PROFESSOR_H

#include <QWidget>
#include <professor.h>
#include <QPixmap>

namespace Ui {
class cadastro_professor;
}

class cadastro_professor : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro_professor(QWidget *parent = nullptr);
    ~cadastro_professor();

private:
    Ui::cadastro_professor *ui;

};

#endif // CADASTRO_PROFESSOR_H
