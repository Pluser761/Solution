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
	int n;
	cout << "Enter number:";
	cin >> n;

	for (int i = n; i <= n * 2 - 2; i++)
		if (simple(i) && simple(i + 2)) cout << i << " and " << (i + 2) << endl;

	system("pause");
	return 0;
}