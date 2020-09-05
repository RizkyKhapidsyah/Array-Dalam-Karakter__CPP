#include <iostream>
#include <conio.h>
#include <cstdlib>

/* Created by Rizky Khapidsyah */

using namespace std;

int main() {
	int i;
	char Nama1[20] = { 'R','I','Z','K','Y',' ','K','H','A','P','I','D','S','Y','A','H' };
	char Nama2[20] = "Rizky Khapidsyah";

	cout << "----------------\n";
	cout << "Array Karakter\n";
	cout << "----------------\n";

	for (i = 0; i <= 19; i++)
	{
		cout << Nama1[i];
	}

	puts("\n");
	cout << "------------------------------------------------------\n";
	cout << "Array String: " << Nama2 << endl << endl;
	cout << "------------------------------------------------------\n";

	_getch();
	return 0;
}