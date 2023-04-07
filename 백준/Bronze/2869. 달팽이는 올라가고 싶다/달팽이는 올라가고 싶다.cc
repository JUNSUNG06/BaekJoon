#include<iostream>
using namespace std;

int main()
{
	int a, b, v, day, parent, child;

	cin >> a >> b >> v;
	parent = v - b;
	child = a - b;
	day = parent / child;

	if (parent % child != 0)
		day++;

	cout << day;
}