#pragma once

#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <libpyatnashki/Utility.h>
#include <string>

enum DIRECTION { UP, DOWN, LEFT, RIGHT };

class Field {
public:
  Field(int size);
  ~Field();
  bool CheckWin();
  void TryMove(DIRECTION dir);
  void GenerateField();
  void ShowField();

private:
  int size;
  int **field;
  int null_i;
  int null_j;
};