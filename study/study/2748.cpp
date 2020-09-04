#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;

long long answer[100] = { 0,1, };
int N;
long long Fibonacchi(int n) {
	if (n == 0 || n == 1) {
		return answer[n];
	}
	//if (answer[n] == 0)
		//answer[n] = Fibonacchi(n - 1) + Fibonacchi(n - 2);
	if (answer[n] != 0)
		return answer[n];
	
	return answer[n] =  Fibonacchi(n - 1) + Fibonacchi(n - 2);
}

int main() {
	scanf("%d", &N);
	cout << Fibonacchi(N);

	system("pause");
	return 0;
}