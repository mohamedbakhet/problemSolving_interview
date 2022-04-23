#include<iostream>
using namespace std;
int main() {
	string s1;
	cin >> s1;
	char* t = new char[s1.length()];
	int counter = 0;
	for (int j = 0; j < s1.length(); j++)
	{
		t[j] = '0';
	}
	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = 0; j < s1.length(); j++)
		{
			if (t[j] == s1[i])
			{
				break;
			}
			if (t[j]=='0')
			{
				t[j] = s1[i];
				counter++;
				break;
			}
		}

	}
	if (counter%2==0)
		cout << "CHAT WITH HER!";

	else
		cout << "IGNORE HIM!";


	return 0;
}