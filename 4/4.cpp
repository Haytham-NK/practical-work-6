
using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	int minimumElemetnt = 30;
	int number;
	int arr[10];

	cout << "Array : ";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		if (minimumElemetnt > arr[i])
		{
			minimumElemetnt = arr[i];
			number = i + 1;
		}
	}
	cout << "Minimum number = " << minimumElemetnt << endl;
	cout << "serial number - " << number;
}
