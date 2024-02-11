#include <iostream>

using namespace std;

int main() {
  int N, L;

  cin >> N >> L;

  double lengthInMeters;

  if (N < 1 || N > 5) {
    cout << "Invalid unit code N. Must be between 1 and 5." << endl;
    return 1;
  }

  switch (N) {
  case 1:
    lengthInMeters = L / 10;
    break;

  case 2:
    lengthInMeters = L * 1000;
    break;

  case 3:
    lengthInMeters = L;
    break;

  case 4:
    lengthInMeters = L / 1000;
    break;

  case 5:
    lengthInMeters = L / 100;
    break;
  }

  cout << lengthInMeters << endl;

  return 0;
}
