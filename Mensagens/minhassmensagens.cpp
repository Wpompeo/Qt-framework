#include "minhassmensagens.h"
#include "ui_minhassmensagens.h"
#include "QMessageBox"

MinhassMensagens::MinhassMensagens(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MinhassMensagens)
{
    ui->setupUi(this);
}
MinhassMensagens::~MinhassMensagens(){

    delete ui;
}
void MinhassMensagens::on_btn_info_clicked(){

    QMessageBox::information(this , "Terminal Root", "Essa é minha informação.");
}
void MinhassMensagens::on_btn_danger_clicked(){

    QMessageBox::critical(this , "Terminal Root alerta!", "Error de alguma situação.");
}
void MinhassMensagens::on_btn_warning_clicked(){

    QMessageBox::warning(this , "Terminal Root Warning", "Atenção, possivel falha.");
}




void MinhassMensagens::on_btn_about_clicked()
{
    QMessageBox::about(this, "Sobre Terminal Root", "<h2>Terminal Root informa</h2>"
                       "<a href='https://www.linkedin.com/in/wpc23/'>Acesse o site para mais informações.</a>"
                       "<br>"
                                                    "<i>Meu about!</i>");
}

