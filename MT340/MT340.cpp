#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double s = 0, x = 1;
	int n, i;

	do
	{
		cout << "n="; cin >> n;
	} 
	while (n <= 1);

	for (i = 1; i <= n; i++) 
	{
		s += x * x;
		x = 0.5 * fabs(x - 4);
	}

	cout << "S=" << s;

	return 0;
}