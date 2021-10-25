#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
using namespace std;
/*
int get_gcd(int a, int b) {
	return b ? get_gcd(b, a % b) : a;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int chleo, chlth;
	cin >> chleo >> chlth;
	int A, B;
	int div = chlth / chleo;
	for (int i = sqrt(div); i>=1; i--)
	{
		if (div%i == 0) {
			if (get_gcd(i, div / i) == 1) {
				A = chleo*i;
				B = chleo*(div / i);
				break;
			}
			else {
				continue;
			}
		}
	}
	cout << A << " "<<B << endl;
	system("pause");
	return 0;
}*/