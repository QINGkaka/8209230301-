#include<iostream>
using namespace std;
int main() {
	double x, y;
	cout << "������x:";
	cin >> x;
	if (x > 0 && x < 1) {
		y = 3 - 2 * x;
		cout << "y=" << y << endl;
	}
	if (x >= 1 && x < 5) {
		y = 2 / (4 * x) + 1;
		cout << "y=" << y << endl;
	}
	if (5 <= x && x < 10) {
		y = x * x;
		cout << "y=" << y << endl;
	}
}