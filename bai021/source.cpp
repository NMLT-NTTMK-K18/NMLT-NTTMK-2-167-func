#include<iostream>
using namespace std;

int main()
{
	cout << "Nhap x=";
	float x;
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x16 = x8 * x8;
	float x15 = x16 / x;
	cout << "x15=" << x15;
	return 0;
}
