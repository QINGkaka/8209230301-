#include<iostream>
using namespace std;
int main() {
	double a, b;
	char c;
	cout << "��������������һ�������" << endl;
	cin >> a >> b >> c;
	switch (c) {
	case'+':cout << a + b << endl; break;
	case'-':cout << a - b << endl; break;
	case'*':cout << a * b << endl; break;
	case'/': if (b == 0) {
		cout << "��������Ϊ0" << endl;
	}
		   else {
		cout << a / b << endl;
	}break;
	default:cout << "��������Ϸ�" << endl;
	
	}
	
}