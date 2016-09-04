#include <iostream>
#include <ctime>
using namespace std;

#define MASS_SIZE 10

void arrayOut(int mass[], int size)
{
	cout << "[" << size << "] = {";
	for (int i = 0; i < size; i++)
	{
		cout << mass[i] << ", ";
	}
	cout << "};" << endl;
}

void arrayGenerator(int mass[], int size, int maxValue = 20)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % maxValue;
	}
}

int countPrimeNumbers(int mass[], int size)
{
	int counter = 0;
	bool numberPrimes;
	for (int i = 0; i < size; i++)
	{
		if (mass[i] != 0)
		{
			numberPrimes = true;
			for (int j = 2; j < mass[i]; j++)
			{
				if (mass[i] % j == 0)
				{
					numberPrimes = false;
					break;
				}
			}
			if (numberPrimes)
			{
				counter++;
			}
		}
	}
	return counter;
}

int main()
{
	int mass[MASS_SIZE];
	arrayGenerator(mass, MASS_SIZE);
	arrayOut(mass, MASS_SIZE);
	cout << "V tekyshem massive " << counterPrimes(mass, MASS_SIZE) << " prostih chisel." << endl;
	return 0;
}
