#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int n;
	in >> n;
	int num = 2, n1 = 1, n2 = 0, b = 0;
	while (b != 1) {
		num++;
		int k = 0;
		for (int i = 2; i <= num / 2; i++)
			if (num % i == 0)
				k++;
		if (k == 0) {
			n1++;
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


	out << num;



}
