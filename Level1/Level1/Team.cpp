#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int counter = 0;
	char t;
	for (int i = 0; i < n; i++)
	{
		int counter2 = 0;
		for (int j = 0; j < 3; j++)
		{
			cin >> t;
			if (t == '1')
				counter2++;
		}
		if (counter2 >= 2)
			counter++;

	}
	cout << counter;
	return 0;
}

