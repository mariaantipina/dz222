#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int getRandomNumber(int min, int max){
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	return static_cast<int>(rand() * fraction * (max - min + 1) + min);
}
int main() {
	setlocale(LC_ALL,"Rus");
	srand(time(0));
	int a = getRandomNumber(1, 6);
	int b = getRandomNumber(1, 6);
	cout << a << " ";
	cout << b;
	return 0;
}