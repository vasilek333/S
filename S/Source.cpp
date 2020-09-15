#include <iostream>

int main() {
	int h, a, b;
	std::cin >> h >> a >> b;
	int day;
	day = h / (a - b) + (h % (a - b) - 1) % (a-b);
	return 0;
}