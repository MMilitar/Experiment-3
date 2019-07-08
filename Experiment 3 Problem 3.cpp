#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
#include<cstring>

using namespace std;
int main()
{
	
	int i;
	char str[] = {'e', 'n', 'g', '1', '9', '0', '7'};
	int size = sizeof(str);
	
	cout << "ARRAY : eng1907\n";
	
	reverse(str, str+size);
	cout << "\nOUTPUT : ";
		for (i = 0; i <= 8; i++)
		{
			cout << str[i];
		}
	cout << "\n\nSIZE OF ARRAY : " << size;
	
		
	
getch();
return 0;
}
