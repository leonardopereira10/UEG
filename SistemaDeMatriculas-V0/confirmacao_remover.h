#ifndef CONFIRMACAO_REMOVER_H
#define CONFIRMACAO_REMOVER_H

#include <QDialog>

namespace Ui {
class confirmacao_remover;
}

class confirmacao_remover : public QDialog
{
    Q_OBJECT

public:
    explicit confirmacao_remover(QWidget *parent = nullptr);
    ~confirmacao_remover();

private:
    Ui::confirmacao_remover *ui;
};

#endif // CONFIRMACAO_REMOVER_H
