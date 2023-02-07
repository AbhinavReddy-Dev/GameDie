#ifndef GAMEDIE_H
#define GAMEDIE_H

#include <vector>
using namespace std;
class GameDie
{
public:
  GameDie();
  GameDie(int n);
  int roll();

private:
  const static int FACES = 6;
  int custom_FACES;
  bool cf_enabled = false;
  int counter[FACES];
};

#endif
