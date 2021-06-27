#include "repositorio.h"
#include "ui_repositorio.h"

Repositorio::Repositorio(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Repositorio)
{
    ui->setupUi(this);
}

Repositorio::~Repositorio()
{
    delete ui;
}


void Repositorio::on_pushButton_clicked()
{
    ui->outSaludo->setText("Ver programa con GIT");
}
