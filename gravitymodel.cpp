#include "gravitymodel.h"
#include "./ui_gravitymodel.h"

GravityModel::GravityModel(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GravityModel)
{
    ui->setupUi(this);
}

GravityModel::~GravityModel()
{
    delete ui;
}

