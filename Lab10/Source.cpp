#include <iostream>

using namespace std;

bool simple(int n)
{
	if (n == 2) return true;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0) return false;
	return true;
}

int main()
{
	int n, last_simple = 2;
	cout << "Enter number:";
	cin >> n;

	cout << n << " consists ";

	while (n != 1)
		if (n % last_simple == 0)
		{
			n = n / last_simple;
			cout << last_simple << "  ";
		}
		else
			for (int i = last_simple + 1; true; i++)
				if (simple(i))
				{
					last_simple = i;
					break;
				}

	cout << endl;
	
	system("pause");
	return 0;
}