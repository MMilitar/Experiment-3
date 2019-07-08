#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	char a = 'A';
	
	int b;
	int temp[a][b];
	
	for (char a = 'A'; a <= 'C'; a++)
	{
		for (int b = 0; b < 7; b++)
		{
		cout << "Province " << a;
		cout << " Day " << b + 1 << " : ";
		cin >> temp[a][b];
		}
		
	}
	
	cout << "\nDisplaying Values : \n";
	
	for (char a = 'A'; a <= 'C'; a++){
		for (int b = 0; b < 7; b++)
		{
	cout << "Province"  << a << ", Day " << b + 1 << " : " << temp[a][b] << endl;
		}
	}

	
getch();
return 0;
}
