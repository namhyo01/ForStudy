//최대 증가 부분 수열
//알고스팟
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

int n;
int cache[101],S[100];

int list(int start);

int main() {
	int C;
	cin >> C;
	for (int l = 0; l < C; l++) {
		memset(S, 0, sizeof(S));
		memset(cache, -1, sizeof(cache));
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> S[n];
		}
		list(n); \
			cout << list(n);
	}
	system("pause");
	return 0;
}
// list작성 dp
int list(int start) {
	int &ret = cache[start];
	if (ret != -1) return ret;
	int;
	return ret;
}