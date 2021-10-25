#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int N;
long long P[101] = {0,1,1,1,2,2,3,4,5,7,9, };

long long padoban(int n) {
	if (P[n] != 0)
		return P[n];
	return P[n] = padoban(n - 5) + padoban(n - 1);
}

int main() {
	int T;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &N);
		padoban(N);
		cout << P[N] << endl;
	}

	system("pause");
	return 0;
}*/