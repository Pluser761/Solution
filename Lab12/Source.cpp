#include <iostream>

using namespace std;

int pow(int a, int exp)
{
	int ret = a;
	for (int i = 0; i < exp-1; i++)
		ret *= a;
	return ret;
}

bool armstron(int k)
{
	int sum = 0, n = 0,k_s = k, k_const = k;

	while (k != 0)
	{
		n++;
		k /= 10;
	}

	while (k_s != 0)
	{
		sum += pow(k_s % 10, n);
		k_s /= 10;
	}


	if (sum == k_const) return true;
	return false;
}

int main()
{
	int k, sum = 0, n = 0;
	cout << "Enter number:";
	cin >> k;

	for (int i = 1; i <= k; i++)
		if (armstron(i)) cout << i << endl;

	system("pause");
	return 0;
}