#include<iostream>
using namespace std;
void Nhap(int&);
int Xuly(int);

int main()
{
	int n;
	Nhap(n);
	if (Xuly(n) == 1)
		cout << "DX";
	else
		cout << "Ko DX";
	return 0;
}

void Nhap(int& nn)
{
	int n;
	cout << "Nhap n: ";
	cin >> nn;
}

int Xuly(int nn)
{
	int dn = 0;
	int t = nn;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}

	if (dn == nn)
		return 1;
	else
		return 0;
}

