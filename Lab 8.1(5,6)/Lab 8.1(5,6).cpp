#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Print(char* A)
{
	int k = 0;
	int i = 0;
	char* a;
	while (a = strchr(A + i, ','))
	{
		i = a - A + 1;
		if (A[i] == ',' && A[i + 1] == '-')
			k++;
		return k;
	}
}
char* Change(char* A)
{
	char* B = new char[strlen(A)];
	char* b;
	int pos1 = 0;
	int pos2 = 0;
	*B = 0;
	while (b = strchr(A + pos1, ','))
	{
		if (A[b - A + 1] == '-')
		{
			pos2 = b - A + 2;
			strncat = (B, A + pos1, pos2 - pos1 - 2);
			strcat(B, "*");
			pos1 = pos2;
		}
	}
	strcat(b, A + pos1);

	strcpy(A, b);

	return b;
}
int main()
{
	char A[101];
	cout << "Enter string:" << endl;
	cin.getline(A, 100);

	cout << "String conteined " << Print(A) << " groups of ', -' " << endl;
	Print(Change(A));
	cout << "Modified string (param):" << A << endl;
	return 0;

}

