#ifndef CADASTRO_PROFESSOR_H
#define CADASTRO_PROFESSOR_H

#include <QWidget>
#include <professor.h>
#include <QPixmap>
#include <QtSql>
#include <QSqlDatabase>

namespace Ui {
class cadastro_professor;
}

class cadastro_professor : public QWidget
{
    Q_OBJECT

public:
    explicit cadastro_professor(QWidget *parent = nullptr);
    ~cadastro_professor();
    bool check_inserted_text_name(QString text);
    bool check_inserted_text_Bday(QString text);
    bool check_inserted_text_commun(QString text);
    bool check_inserted_text_phone(QString text);

private slots:


private:
    Ui::cadastro_professor *ui;
};

#endif // CADASTRO_PROFESSOR_H
