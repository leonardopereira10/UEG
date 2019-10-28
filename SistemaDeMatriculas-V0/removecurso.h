#ifndef REMOVECURSO_H
#define REMOVECURSO_H

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

private:
    Ui::removeCurso *ui;
};

#endif // REMOVECURSO_H
