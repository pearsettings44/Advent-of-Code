#include <fstream>
#include <iostream>
using namespace std;

int main() {
  int calories = 0;
  int max_calories = 0;
  ifstream in("in.txt");
  std::string line;
  while (getline(in, line)) {
    if (line != "")
      calories += stoi(line);
    else {
      max_calories = calories > max_calories ? calories : max_calories;
      calories = 0;
    }
  }
  in.close();
  cout << max_calories << endl;
  return 0;
}