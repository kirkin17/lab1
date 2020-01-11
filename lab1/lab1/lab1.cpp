#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL,"russian");
	int x, y;
	cout << ("Введите х: ");
	cin >> x;
	cout << ("Введите у: ");
	cin >> y;
	while (1)
	{
		if (x == 0 && y == 0) break;
		if ((x <= 5) && (y >= 2) && ((y <= x)))
		{
			cout << "Точка входит в треугольник!\n";
		}
		else { cout << "Точка НЕ входит в треугольник!\n"; };
		cin >> x >> y;
	}
}
