
using namespace std;
#include <iostream>
#include<ctime>

int main()
{
	int sum = 0;
	int arr[10];

	cout << "Array : ";

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		sum += arr[i];
	}
	cout << "Sum = " << sum;
}
