#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
  int calories = 0;
  int max_calories_1, max_calories_2, max_calories_3  = 0;
  ifstream in("in.txt");
  string line;
  while (getline(in, line)) {
    if (line != "")
      calories += stoi(line);
    else {
      if (calories > max_calories_1) {
        max_calories_3 = max_calories_2;
        max_calories_2 = max_calories_1;
        max_calories_1 = calories;
      } else if (calories > max_calories_2) {
        max_calories_3 = max_calories_2;
        max_calories_2 = calories;
      } else if (calories > max_calories_3)
        max_calories_3 = calories;
      calories = 0;
    }
  }
  in.close();
  cout << max_calories_1 + max_calories_2 + max_calories_3 << endl;
  return 0;
}