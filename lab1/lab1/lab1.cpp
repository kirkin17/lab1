#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y;
	cin >> x >> y;
	while (1)
	{
		if (x == 0 && y == 0) break;
		if ((x <= 5) && (y >= 2) && ((y <= x)))
		{
			cout << "Included\n";
		}
		else { cout << "Not included\n"; };
		cin >> x >> y;
	}
}