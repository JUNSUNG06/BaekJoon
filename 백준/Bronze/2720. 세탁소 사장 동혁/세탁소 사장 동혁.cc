#include<iostream>
using namespace std;

enum class Money
{
	Penny = 1,
	Nickel = 5,
	Dime = 10,
	Quarter = 25
};

int DivideMoney(Money moneyUnit, int& money)
{
	int result = money / (int)moneyUnit;
	money %= (int)moneyUnit;
	return result;
}

int main()
{
	int quarterCnt = 0;
	int dimeCnt = 0;
	int nickelCnt = 0;
	int pennyCnt = 0;

	int money, cnt;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> money;

		quarterCnt = DivideMoney(Money::Quarter, money);
		dimeCnt = DivideMoney(Money::Dime, money);
		nickelCnt = DivideMoney(Money::Nickel, money);
		pennyCnt = DivideMoney(Money::Penny, money);

		cout << quarterCnt << ' ' << dimeCnt << ' ' << nickelCnt << ' ' << pennyCnt << endl;
	}
}