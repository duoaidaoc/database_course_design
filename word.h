#include "QString"
#ifndef WORD_H
#define WORD_H

typedef struct Word{
  QString eng;
  QString sound_url;
  QString info;
}Word;

typedef struct CClass{
  qint64 id;
  QString name;
  QString cue;
}CClass;

typedef struct Task{
  QString name;
}Task;

typedef struct Student{
  qint64 id;
  QString Password;
  QString name;
}Student;

typedef struct Teacher{
  qint64 id;
  QString Password;
  QString name;
}Teacher;

typedef struct ques{
  bool is_sel; // 是选择题吗？
  bool is_fill; // 是填空题吗？
  QString A,B,C; // 选择题的a,b,c选项
  int right; //选择题的正确选项(1-a,2-b,3-c)
  QString eng,chn; //填空题的中英文
}ques;


#endif // WORD_H
