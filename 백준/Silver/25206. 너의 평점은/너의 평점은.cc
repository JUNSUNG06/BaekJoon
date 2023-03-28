#include<iostream>
#include<string>
#include<map>
using namespace std;

map<string, float> Grade =
{
	{"A+", 4.5f},
	{"A0", 4.0f},
	{"B+", 3.5f},
	{"B0", 3.0f},
	{"C+", 2.5f},
	{"C0", 2.0f},
	{"D+", 1.5f},
	{"D0", 1.0f},
	{"F", 0.0f}
};

int main()
{
	string name, grade;
	float score, mulSum = 0, sum = 0;

	for (int i = 0; i < 20; i++)
	{
		cin >> name >> score >> grade;

		if (grade == "P")
			continue;

		sum += score;
		mulSum += score * Grade[grade];
	}

	cout << fixed;
	cout.precision(6);
	cout << mulSum / sum;
}