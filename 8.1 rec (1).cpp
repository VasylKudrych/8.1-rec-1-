#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool Include(const char* s, int i)
{

	if ((s[i] == '!' && s[i + 1] == '!' && s[i + 2] == '!'))
		return true;

	if (s[i + 1] != '\0')
		return Include(s, i + 1);
	else
		return false;
}

int main()
{
	char s[101]; //оголошення літерного рядка
	cout << "Enter string:" << endl;
	cin.getline(s, 100);
	if (Include(s, 0))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return  0;
}
