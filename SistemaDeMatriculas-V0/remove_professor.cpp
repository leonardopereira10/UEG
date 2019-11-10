#include "remove_professor.h"
#include "ui_remove_professor.h"

remove_professor::remove_professor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::remove_professor)
{
    ui->setupUi(this);
}

remove_professor::~remove_professor()
{
    delete ui;
}
