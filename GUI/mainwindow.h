#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"neurona.h"
#include"listaneuronas.h"
#include<QMainWindow>
#include<QFileDialog>
#include<QMessageBox>
#include<QFile>
#include<QTextStream>
#include<QVector>
#include<QString>
#include<QTableWidget>
#include<QTableWidgetItem>
#include<QGraphicsScene>
#include<QGraphicsEllipseItem>
#include<QBrush>
#include<QPen>
#include<cmath>
#include<QGraphicsLineItem>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ListaNeuronas lista;

private slots:
    void ocultar_todo();

    void mostrar_todo();

    void on_actionGuardar_triggered();

    void on_actionCargar_triggered();

    int delimitador(int, QString);

    void on_pushButton_add_clicked();

    void on_pushButton_addf_clicked();

    void on_pushButton_lista_clicked();

    void on_pushButton_salir_clicked();

    void on_pushButton_salir_lista_clicked();

    void on_pushButton_tabla_clicked();

    void on_pushButton_buscar_clicked();

    void on_pushButton_salir_tabla_clicked();

    void on_pushButton_mostrar_clicked();

    void on_pushButton_salir_mostrar_clicked();

    void on_pushButton_ordenar_clicked();

    void on_pushButton_por_id_clicked();

    void on_pushButton_por_voltaje_clicked();

    void on_pushButton_graficar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
