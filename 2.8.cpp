#include<iostream>
using namespace std;
int main() {
	double x, X, a;
	cin >> a;
	x = a;
	X = (x + a / x) / 2;
	if (a < 0)cout << "a����Ϊ����" << endl;
	else {
		do {
			x = X;
			X = (x + a / x) / 2;
		} while (abs(X - x) >= 1e-5);
		cout << "ƽ����Ϊ:" << X << endl;
	}
}