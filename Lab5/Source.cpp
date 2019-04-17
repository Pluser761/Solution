#include <iostream>

using namespace std;

bool check(int n)
{
	int n_s = n;
	while (n != 0)
	{
		if (n % 10 != 0)
			if (n_s % (n % 10) != 0) return false;
		n = n / 10;
	}
	return true;
}

int main()
{
	int n;
	cout << "Enter number:";
	cin >> n;

	for (int i = 1; i <= n; i++)
		if (check(i)) cout << i << endl;

	system("pause");
	return 0;
}