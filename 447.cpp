#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ifstream in("in.txt");
	ofstream out("out.txt");
    long long n, f = 1;
    in >> n;
    for (int i = 1; i <= n; ++i) {
        f *= i;
        while (f % 10 == 0) {
            f /= 10;
        }
        f %= 1000000;
    }
    out << f % 10;



}
