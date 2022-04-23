/*#include<iostream>
using namespace std;
int main() {
	string s1,s2;
	cin >> s1 >>s2;
	int t = 0;

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i]<91&& s1[i] > 64)
			s1[i]=(int)s1[i]+32;
		
	}
	for (int i = 0; i < s2.length(); i++)
	{
		if (s2[i] < 91&& s2[i] > 64)
			s2[i]= (int)s2[i] + 32;
	}
	if (s1 > s2)
		cout << "1";
	else if (s1 < s2)
		cout << "-1";
	else
		cout << "0";


	return 0;
}
*/