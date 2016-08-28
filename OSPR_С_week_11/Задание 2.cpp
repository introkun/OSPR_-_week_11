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

void arrayGenerator(int mass[], int size, int maxValue)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		mass[i] = rand() % maxValue;
	}
}

void arrayReversal(int mass[], int size)
{
	for (int i = 0, j = size - 1; i < j; i++, j--)
	{
		mass[i] += mass[j];
		mass[j] = mass[i] - mass[j];
		mass[i] -= mass[j];
	}
}

int main()
{
	int mass[MASS_SIZE];
	arrayGenerator(mass, MASS_SIZE, 25);
	cout << "mass";
	arrayOut(mass, MASS_SIZE);
	arrayReversal(mass, MASS_SIZE);
	cout << "mass";
	arrayOut(mass, MASS_SIZE);
	return 0;
}