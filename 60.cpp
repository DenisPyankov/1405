#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int n;
	cin >> n;
	int num = 1, n1 = 0, n2 = 0, b = 0;
	while (b != 1) {
		num++;
		n1++;
		int k = 0;
		for (int i = 2; i <= num / 2; i++)
			if (num % i == 0)
				k++;
		cout << num << " " << n1 << " " << k << endl;
		if (k == 0 && n1 != 1) {
			int k2= 0;
			for (int i = 2; i <= n1 / 2; i++)
				if (n1 % i == 0)
					k2++;
			if (k2 == 0)
				n2++;
			if (n2 == n)
				b++;

		}
		
	}


	cout << num;



}
