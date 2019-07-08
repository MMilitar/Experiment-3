#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int sum;
	int arr[15];
	int min = 0;
	int max = 0;
	int t = 0;
	
	for (int i = 0; i < 15; i++)
	{
		cout << "ENTER NUMBER " << i + 1 << " : ";
		cin >> arr[i];
		sum += arr[i];
	}
	
	max = arr[0];
	min = arr[0];
	
	for (int i = 1; i < 15; i++)
	{
		t = arr[i];
		if (t < min)
			min = t;
	
		if (t > max)
			max = t;
	
	}

	
	
	cout << "\nTHE LARGEST INTEGER IS : " << max;
	cout << "\nTHE SMALLEST INTEGER IS : " << min;
	cout << "\nTHE TOTAL IS : " << sum;
	cout << "\nTHE AVERAGE IS : " << sum/15;

	
	
	_getch();
	return 0;
}
