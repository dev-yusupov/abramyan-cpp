#include <iostream>
#include <map>

int main() {
	std::map<int, std::string> Days;

	Days[0] = "Sunday";
	Days[1] = "Monday";
	Days[2] = "Tuesday";
	Days[3] = "Wednesday";
	Days[4] = "Thursday";
	Days[5] = "Friday";
	Days[6] = "Saturday";

	int K;
	std::cin >> K;

	int dayIndex = (K + 5) % 7;

	std::cout << Days[dayIndex] << std::endl;

	return 0;
}