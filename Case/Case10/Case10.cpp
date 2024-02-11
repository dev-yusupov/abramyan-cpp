#include <iostream>

using namespace std;

char directions[] = {'N', 'E', 'S', 'W'};

int main() {
  char C, dir;
  int N;

  cout << "Enter initial direction (N, E, S, W): ";
  cin >> C;

  cout << "Enter instruction (0 - move, 1 - turn left, -1 - turn right): ";
  cin >> N;

  // Validate input
  if (C != 'N' && C != 'E' && C != 'S' && C != 'W') {
    cout << "Invalid initial direction." << endl;
    return 1;
  }

  if (N != 0 && N != 1 && N != -1) {
    cout << "Invalid instruction." << endl;
    return 1;
  }

  // Find the index of the initial direction
  int dirIndex = 0;
  for (int i = 0; i < 4; i++) {
    if (directions[i] == C) {
      dirIndex = i;
      break;
    }
  }

  // Apply the instruction and calculate the new index
  switch (N) {
    case 0:
      // No change in direction
      break;
    case 1:
      dirIndex = (dirIndex + 3) % 4; // Turn left: move 3 positions back in the array
      break;
    case -1:
      dirIndex = (dirIndex + 1) % 4; // Turn right: move 1 position forward in the array
      break;
  }

  // Get the new direction based on the calculated index
  dir = directions[dirIndex];

  cout << "Robot's new direction: " << dir << endl;

  return 0;
}
