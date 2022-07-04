#include <iostream>
#include <string>

using namespace std;

string GetRuler(const string& kingdom) {
  // TODO: implement this method to determine the ruler name, given the kingdom.
  string ruler;
  char comp = kingdom[(kingdom.size())-1];
  if (comp == 'Y' || comp == 'y'){
    ruler = "nobody";
  }else if (comp == 'A' || comp == 'E' || comp == 'I' || comp == 'O' || comp == 'U' || comp == 'a' || comp == 'e' || comp == 'i' || comp == 'o' || comp == 'u'){
    ruler = "Alice";
  }else{
    ruler = "Bob";
  }
  return ruler;
}

int main() {
  int testcases;
  cin >> testcases;
  string kingdom;

  for (int t = 1; t <= testcases; ++t) {
    cin >> kingdom;
    cout << "Case #" << t << ": " << kingdom << " is ruled by "
         << GetRuler(kingdom) << ".\n";
  }
  return 0;
}