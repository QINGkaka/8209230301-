#include<iostream>
using namespace std;
int main() {
	int i,s=2,d = 1;
	for (i = 2; s <= 100; d++) {
		i *= 2;
		s = s + i;

	}
	cout <<"������Ϊ:" << d-1 << endl;
	cout << "ƽ��ÿ�컨:" << 0.8*(s - i) / (d - 1) <<"Ԫ" << endl;
}