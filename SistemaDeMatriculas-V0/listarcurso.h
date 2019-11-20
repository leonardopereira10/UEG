#ifndef LISTARCURSO_H
#define LISTARCURSO_H

#include <QWidget>

namespace Ui {
class ListarCurso;
}

class ListarCurso : public QWidget
{
    Q_OBJECT

public:
    explicit ListarCurso(QWidget *parent = 0);
    ~ListarCurso();

private:
    Ui::ListarCurso *ui;
};

#endif // LISTARCURSO_H
