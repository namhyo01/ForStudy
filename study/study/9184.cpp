#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>

using namespace std;
/*
int dp[102][102][102];

int w(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	if (a > 20 || b > 20 || c > 20)
		return w(20, 20, 20);
	int &ret = dp[a][b][c];
	if (ret != 0)
		return ret;
	if (a < b && b < c)
		return ret = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
	return ret = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w("<< a<< ", "<< b<< ", "<< c<< ") = "<< w(a, b, c) << endl;


	}
}*/