#include <iostream>
using namespace std;
int main()
{
	system(" chcp 1251 > nul");
	int cash, coins, cash_after, coins_after;

	cout << "Введіть кількість гривень: ";
	cin >> cash;

	cout << "Введіть кількість копійок: ";
	cin >> coins;

	cash_after = cash + (coins / 100);
	coins_after = coins % 100;

	cout << cash_after << " гривень " << coins_after << " копійок.";

	return 0;
}