#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/**

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> N(1000);
	int idx = 0;
	bool finish = false;
	for (int i = 1; i <= 1000; i++) {
		if (!finish) {
			for (int j = 1; j <= i; j++) {
				if (idx < 1000) {
					N[idx] = i;
					idx++;
				}
				else {
					break;
				}
			}
		}
		else
			break;
	}
	int A, B;
	int ans = 0;
	cin >> A >> B;
	for (int i = A - 1; i < B; i++)
		ans += N[i];
	cout << ans << endl;

	system("pause");
	return 0;
}*/