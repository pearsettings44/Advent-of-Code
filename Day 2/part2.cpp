#include <fstream>
#include <iostream>
#include <string>
#include "day2.h"

using namespace std;

int main() {
  int sum = 0;
  ifstream in("in.txt");
  string hisMove, myMove;
  while (in >> hisMove >> myMove) {
    if (hisMove == _ROCK) {
      if (myMove == _LOSE)
        sum += LOSE + SCISSORS;
      else if (myMove == _DRAW)
        sum += DRAW + ROCK;
      else if (myMove == _WIN)
        sum += WIN + PAPER;

    } else if (hisMove == _PAPER) {
      if (myMove == _LOSE)
        sum += LOSE + ROCK;
      else if (myMove == _DRAW)
        sum += DRAW + PAPER;
      else if (myMove == _WIN)
        sum += WIN + SCISSORS;

    } else if (hisMove == _SCISSORS) {
      if (myMove == _LOSE)
        sum += LOSE + PAPER;
      else if (myMove == _DRAW)
        sum += DRAW + SCISSORS;
      else if (myMove == _WIN)
        sum += WIN + ROCK;
    }
  }
  cout << sum << endl;
  return 0;
}