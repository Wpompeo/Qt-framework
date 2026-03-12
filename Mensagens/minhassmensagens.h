#ifndef MINHASSMENSAGENS_H
#define MINHASSMENSAGENS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MinhassMensagens;
}
QT_END_NAMESPACE

class MinhassMensagens : public QMainWindow
{
    Q_OBJECT

public:
    MinhassMensagens(QWidget *parent = nullptr);
    ~MinhassMensagens();

private slots:
    void on_btn_info_clicked();

    void on_btn_danger_clicked();

    void on_btn_warning_clicked();

    void on_btn_about_clicked();

private:
    Ui::MinhassMensagens *ui;
};
#endif // MINHASSMENSAGENS_H
