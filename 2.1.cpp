#include <iostream> 
using namespace std;
int main()
{
	char ca;
	cin >> ca;
	if (ca >= 'a' && ca <= 'z') {
		ca = ca - 32;
		cout << "��д��ʽΪ:" << static_cast<char>(ca) << endl;
	}
	else if (ca >= 'A' && ca <= 'Z') {
		cout << "ASCLL:" << static_cast<int>(ca) << endl;
	}
}
