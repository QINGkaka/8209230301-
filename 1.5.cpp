#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double t, T;
	cout << "�����뻪���¶�:";
	cin >> T;
	t = (T- 32) * 5 / 9;
	cout << setprecision(2) << "�����¶�Ϊ" << t << endl;
}