#include<iostream>
using namespace std;
int main() {
	double a, b, c;
	cout << "���������������߳�a,b,c" << endl;
	cin >> a >> b >> c;
	if (a+b>c&&a+c>b&&b+c>a) {
		if (a == b || a == c || b == c) {
			cout << "�����߹��ɵ���������" << endl;
		}
		else {
			cout << "�������ܹ��������Σ������ǵ���������" << endl;
		}
	}
	else {
		cout << "�����߲��ܹ���������" << endl;
	}

}