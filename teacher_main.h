#ifndef TEACHER_MAIN_H
  #define TEACHER_MAIN_H

#include "class_frame.h"
#include "newclass_frame.h"
#include "qboxlayout.h"
#include "qstandarditemModel.h"
#include "task_frame.h"
#include "word_frame.h"
#include <QWidget>

namespace Ui {
class teacher_main;
}

class teacher_main : public QWidget
{
  Q_OBJECT

public:
  explicit teacher_main(QWidget *parent = nullptr);
  ~teacher_main();

  void data_setup();
protected:
  void paintEvent(QPaintEvent* evt)override;

private:
  Ui::teacher_main *ui;


  QVBoxLayout *word_layout,*class_layout,*task_layout;
  std::vector<word_frame* >word_frames;
  std::vector<class_frame* >class_frames;
  std::vector<task_frame* >task_frames;

  QVBoxLayout* student_fixed_layout;
  QHBoxLayout* student_appending_layout[2];

  QImage img;
  newclass_frame* nc_frame;
  CClass current_cls;

  QStandardItemModel *model;
  void ui_setup();
  void connection_setup();
  void test();
  void update_class();
};

#endif // TEACHER_MAIN_H
