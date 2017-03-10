#pragma once
#include <iostream>
#include <string>

using namespace std;

class Snakes {
protected:
  float length;
  string color;
  string name;
public:
  Snakes(string a, string b, float c);
  Snakes();
  void getSnake();
  void changeName();
  void changeColor();
  void changeLength();
};

class Anakonda : private Snakes {
public:
 void Bite();
private:
  int danger_rank;
  int spots;
};
