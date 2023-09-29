#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&);
float Xuly(int);

int main()
{
	int n;
	Nhap(n);
	cout << "s = " << Xuly(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n = ";
	cin >> nn;
}

float Xuly(int nn)
{
	float s = 0;
	int t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * i;
		s = pow(t + s, (float)1 / (i + 1));
		i = i + 1;
	}
	return s;
}