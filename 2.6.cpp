#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, i, j;
	cout << "������������" << endl;
	cin >> a >> b;
	c = max(a, b);
	for (i = 1; i <= c; i++) {
		if (a % i == 0 && b % i == 0) {
			j = i;
		}
	}i = a * b / j;
	cout << "��С������Ϊ:" << i << "�������Ϊ:" << j << endl;
}