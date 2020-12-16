
using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	int number1 = 30;
	int number2 = 0;
	int arr[10];
	int c;

	cout << "Array : ";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		if (number1 > arr[i])
		{
			number1 = arr[i];
		}
		if (number2 < arr[i])
		{
			number2 = arr[i];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		if (arr[i] == number2)
		{
			arr[i] = number1;
		}
		if (arr[i] == number1)
		{
			arr[i] = number2;
		}

	}
	cout << "New array: ";
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
}
