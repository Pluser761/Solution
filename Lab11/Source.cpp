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

	for (int i = 1; i <= n; i++)
		if (simple(i) && simple(n - i))
		{
			cout << n << " = " << (i) << " + " << (n - i) << endl;
			break;
		}

	system("pause");
	return 0;
}