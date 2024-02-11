#include <iostream>

using namespace std;

int main() {
  int D, M;

  cout << "Enter day (D): ";
  cin >> D;

  cout << "Enter month (M): ";
  cin >> M;

  // Validate input date
  if (D < 1 || D > 31 || M < 1 || M > 12) {
    cout << "Invalid date. Please enter a valid day between 1 and 31, and a valid month between 1 and 12." << endl;
    return 1;
  }

  // Handle special cases for month and year changes
  if (D == 31) {
    if (M == 12) {
      D = 1;
      M = 1;
    } else {
      D = 1;
      M++;
    }
  } else {
    D++;
  }

  cout << "Next date: " << D << " " << M << endl;

  return 0;
}
