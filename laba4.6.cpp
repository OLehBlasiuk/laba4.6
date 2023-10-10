#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double P, S;
	int n, i, k;
	P = 1;
	i = 1;
	while (i <= 10)

	{
		S = 0;
		k = 1;
		i = 1;
		while (i <= 10)

		{
			S += 1 / k;
			i++;

		}
		P *= (S+1) / sqrt(S);
		i++;
	}
	cout << P << endl;
	P = 1;
	i  = 1;
	do
	{
		S = 0;
		k = 1;
		i = 1;
		do
		{
			S += 1/k ;
			i++;
		} while (i <= i);
		P *= (1+S) / sqrt(S);
		i++;
	} while (i <= 10);
	cout << P << endl;
	P = 1;
	for (i = 1; i <= 10; i++)

	{
		S = 0;
		for (i = 1; i <= 10; i++)

		{
			S += 1 / k ;

		}
		P *= (1+S) / sqrt(S);

	}
	cout << P << endl;
	P = 1;
	for (i = 10; i >= 1; i--)

	{
		S = 0;
		for (i = 1; i >= 10; i--)

		{
			S += 1 / k;
		}
		P *= (1+S) / sqrt(S);
	}
	cout << P << endl;
	return 0;
}