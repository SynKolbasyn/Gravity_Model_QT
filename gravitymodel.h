#ifndef GRAVITYMODEL_H
#define GRAVITYMODEL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class GravityModel; }
QT_END_NAMESPACE

class GravityModel : public QMainWindow
{
    Q_OBJECT

public:
    GravityModel(QWidget *parent = nullptr);
    ~GravityModel();

private:
    Ui::GravityModel *ui;
};
#endif // GRAVITYMODEL_H
