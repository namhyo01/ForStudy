/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <limits>

using namespace std;
int n, m;
int cache[101][101];
int A[100], B[100];

const long long NEGINF = numeric_limits<long long>::min();// �ּҰ�A[-1], B[-1] = -�ּ�

int lis(int a_start, int b_start) {
	int &ret = cache[a_start + 1][b_start + 1];
	if (ret != -1) return ret;
	// �̹� A�� B�� ��� ���� �ϳ����� �ֱ� �����̴�.
	ret = 2;
	long long a = (a_start == -1 ? NEGINF : A[a_start]);
	long long b = (b_start == -1 ? NEGINF : B[b_start]);
	long long maxElement = max(a, b);

	for (int next = a_start + 1; next<n; next++) {
		if (maxElement<A[next])
			ret = max(ret, lis(next, b_start) + 1);

	}
	for (int nextB = b_start + 1; nextB<m; nextB++)
		if (maxElement<B[nextB])
			ret = max(ret, lis(a_start, nextB) + 1);
	return ret;
}

int main()
{
	int C;
	cin >> C;
	for (int i = 0; i<C; i++) {
		cin >> n >> m;
		memset(cache, -1, sizeof(cache));
		for (int j = 0; j<n; j++)
			cin >> A[j];
		for (int k = 0; k<m; k++)
			cin >> B[k];
		cout << lis(-1, -1) - 2 << endl;
	}

	return 0;
}


