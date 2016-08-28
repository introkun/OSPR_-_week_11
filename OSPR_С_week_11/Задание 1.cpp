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
void outMaxAndMinValueArray(int mass[], int size)
{
	int maxValue = mass[0];
	int minValue = mass[0];
	int maxValueKey = 0;
	int minValueKey = 0;
	for (int i = 1; i < size; i++)
	{
		if (maxValue <= mass[i])
		{
			maxValue = mass[i];
			maxValueKey = i;
		}
		if (minValue >= mass[i])
		{
			minValue = mass[i];
			minValueKey = i;
		}
	}
	cout << "Maksimal'noe znachenie massiva: " << maxValue << " ego indeks: " << maxValueKey << "." << endl;
	cout << "Minimal'noe znachenie massiva: " << minValue << " ego indeks: " << minValueKey << "." << endl;
}

int main()
{
	int mass[MASS_SIZE];
	arrayGenerator(mass, MASS_SIZE);
	arrayOut(mass, MASS_SIZE);
	outMaxAndMinValueArray(mass, MASS_SIZE);
	return 0;
}