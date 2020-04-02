#ifndef SMOOTHSHARE_H
#define SMOOTHSHARE_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include "secsmoothshare.h"


namespace Ui {
class SmoothShare;
}

class SmoothShare : public QMainWindow
{
    Q_OBJECT

public:
    explicit SmoothShare(QWidget *parent = 0);
    QSqlDatabase db;
    QSqlDatabase database;
    ~SmoothShare();

private slots:

   void on_ButtonRegister_clicked();
   void on_Login_clicked();

private:
    Ui::SmoothShare *ui;
    SecSmoothShare *secSmShare;
    SmoothShare *firstWindow;
};


#endif // SMOOTHSHARE_H
