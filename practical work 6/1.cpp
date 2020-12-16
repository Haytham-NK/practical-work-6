
using namespace std;
#include <iostream>


int main()
{
	int arr[10];
	cout << "enter 10 array elements" << endl;

	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	cout << "Array : ";

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}

}
