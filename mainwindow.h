//
// Created by igarz on 31/10/2021.
//

#ifndef UNTITLED1_MAINWINDOW_H
#define UNTITLED1_MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
            void on_boton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif //UNTITLED1_MAINWINDOW_H
