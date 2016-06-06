#ifndef BAI3_H
#define BAI3_H

#include <QDialog>

namespace Ui {
class Bai3;
}

class Bai3 : public QDialog
{
    Q_OBJECT

public:
    explicit Bai3(QWidget *parent = 0);
    ~Bai3();
    QList <int> getNumber(int a);
    QList<int> sapXepSo(QList <int> a);
    int getInputValue(QString name);
    int sinhHoanVi (int a);
    bool kiemTra(int a);
private slots:
    void dung();

private:
    Ui::Bai3 *ui;
};

#endif // BAI3_H
