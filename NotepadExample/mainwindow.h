#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QAction>
#include <QPrinter>
#include <QPrintDialog>
#include <QPrintPreviewDialog>
#include <QApplication>
#include <QFontDialog>
#include <QColorDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

private slots:
  void on_actionNew_triggered();

  void on_actionOpen_triggered();

  void save();

  void saveAs();

  void print();

  void printPreviewDialog();

  void printPreview(QPrinter *printer);

  void exportPdf();

  //UNDO and REDO
  void undo();
  void redo();

  //Cut Copy Paste
  void cut();
  void copy();
  void paste();

  //Bold italic underline
  void fontBold();
  void fontItalic();
  void fontUnderline();

  //ALignment
  void left();
  void right();
  void center();
  void justify();

  //Font and Color
  void font();
  void color();
  void about();



private:
  Ui::MainWindow *ui;
  QString currentFile;
};
#endif // MAINWINDOW_H
