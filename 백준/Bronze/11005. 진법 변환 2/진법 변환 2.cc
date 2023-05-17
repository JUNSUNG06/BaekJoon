#include<iostream>
#include<string>

using namespace std;

int main()
{
	string out = "";
	int input, n;

	cin >> input >> n;

	do 
	{
		int remainder = input % n;

		if (remainder > 9)
		{
			remainder += 55;
			char ch = (char)remainder;
			out = ch + out;
		}
		else
		{
			out.insert(0, to_string(remainder));
		}

		input /= n;
	} while (input > 0);

	for (int i = 0; i < out.size(); i++)
		cout << out[i];
}