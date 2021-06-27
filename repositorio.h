#ifndef REPOSITORIO_H
#define REPOSITORIO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Repositorio; }
QT_END_NAMESPACE

class Repositorio : public QMainWindow
{
    Q_OBJECT

public:
    Repositorio(QWidget *parent = nullptr);
    ~Repositorio();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Repositorio *ui;
};
#endif // REPOSITORIO_H
