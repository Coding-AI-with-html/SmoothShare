#include "secsmoothshare.h"
#include "ui_secsmoothshare.h"

SecSmoothShare::SecSmoothShare(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecSmoothShare)
{
    ui->setupUi(this);
}

SecSmoothShare::~SecSmoothShare()
{
    delete ui;
}
