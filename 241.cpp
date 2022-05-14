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
	int a = n / 5 * 2 + 2;
	int ans = a + n;
	if (ans == 53 || ans == 66) {
		ans++;
	}
	out << ans;
}
