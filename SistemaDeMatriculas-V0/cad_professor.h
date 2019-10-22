#ifndef CAD_PROFESSOR_H
#define CAD_PROFESSOR_H

#include <QDialog>

namespace Ui {
class cad_professor;
}

class cad_professor : public QDialog
{
    Q_OBJECT

public:
    explicit cad_professor(QWidget *parent = nullptr);
    ~cad_professor();

private:
    Ui::cad_professor *ui;
};

#endif // CAD_PROFESSOR_H
