#include <iostream>

using namespace std;

int main()
{
	int n;
	cout << "Enter number:";
	cin >> n;

	for (int i = 1; i <= n - 2; i++)
		if (i*(i+1)*(i + 2) == n) cout << i << " * " << (i + 1) << " * " << (i + 2) << " = " << n << endl;

	system("pause");
	return 0;
}