#ifndef SECSMOOTHSHARE_H
#define SECSMOOTHSHARE_H

#include <QDialog>

namespace Ui {
class SecSmoothShare;
}

class SecSmoothShare : public QDialog
{
    Q_OBJECT

public:
    explicit SecSmoothShare(QWidget *parent = nullptr);
    ~SecSmoothShare();

private:
    Ui::SecSmoothShare *ui;
};

#endif // SECSMOOTHSHARE_H
