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
int cache[101][101],S[100];

int list(int n);

int main() {
	int C;
	cin >> C;
	for (int l = 0; l < C; l++) {
		memset(S, 0, sizeof(S));
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> S[n];
		}
	}
	return 0;
}