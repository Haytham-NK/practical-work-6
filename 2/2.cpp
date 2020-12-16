
using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	int arr[10];

	cout << "Array : ";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = -20 + rand() % 41;
		cout << arr[i] << " ";
	}

	cout << endl;
	cout << "New array : ";

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			arr[i] = 0;
		}
		cout << arr[i] << " ";
	}

}
