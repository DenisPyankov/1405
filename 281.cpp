#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
	int n, m;
	cin >> n >> m;
	vector <int> v;
	v.push_back(1);
	int a = 1, b = 1;
	while (a != n + 1) {
		b *= a;
		v.push_back(b);
		a++;
	}
	int x = 0;
	for (int i = m; i <= n; ++i) {
		x += v[n] / (v[i] * v[n - i]);
	}
	cout << x;
	
}
