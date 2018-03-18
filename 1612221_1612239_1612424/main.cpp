#include<iostream>
using namespace std;

int main()
{
	int a = 4;
	a = a | (1 << 1);
	cout << a;
}