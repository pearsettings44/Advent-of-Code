#include <fstream>
#include <iostream>
#include <string>
#include "day2.h"

int main() {
  int sum = 0;
  ifstream in("in.txt");
  string hisMove, myMove;
  while (in >> hisMove >> myMove) {
    if (hisMove == _ROCK && myMove == PAPER_)
      sum += WIN + PAPER;
    else if (hisMove == _PAPER && myMove == SCISSORS_)
      sum += WIN + SCISSORS;
    else if (hisMove == _SCISSORS && myMove == ROCK_)
      sum += WIN + ROCK;
    else if (hisMove == _ROCK && myMove == ROCK_)
      sum += DRAW + ROCK;
    else if (hisMove == _PAPER && myMove == PAPER_)
      sum += DRAW + PAPER;
    else if (hisMove == _SCISSORS && myMove == SCISSORS_)
      sum += DRAW + SCISSORS;
    else if (hisMove == _ROCK && myMove == SCISSORS_)
      sum += LOSE + SCISSORS;
    else if (hisMove == _PAPER && myMove == ROCK_)
      sum += LOSE + ROCK;
    else if (hisMove == _SCISSORS && myMove == PAPER_)
      sum += LOSE + PAPER;
  }
  cout << sum << endl;
  return 0;
}