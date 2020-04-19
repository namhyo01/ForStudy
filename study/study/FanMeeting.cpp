#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include<math.h>
#pragma warning(disable:4996)
using namespace std;
/*
//�������μ� ���Ҽ� �ִ�.
vector<int> multiply(vector<int> &a, vector<int> &b) {
	vector<int> c(a.size() + b.size() + 1, 0);
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			c[i + j] += (a[i] * b[j]);
		}
	}
	return c;
}
void addTo(vector<int> &a, vector<int> &b, int k) {
	int s = max(b.size() + k, a.size());
	a.resize(s, 0);
	//b.resize(s, 0);
	for (int i = 0; i < b.size(); i++) {
		a[i + k] += b[i];
	}
}

void subFrom(vector<int> &a, vector<int>&b) {
	int s = max(b.size()+1, a.size());
	a.resize(s, 0);
	//b.resize(s, 0);
	for (int i = 0; i < b.size(); i++) a[i] -= b[i];
}
vector<int> karatsuba(vector<int> &a, vector<int> &b) {
	int an = a.size(), bn = b.size();
	//a�� b���� ª�� ��� ���� �ٲ۴�
	if (an < bn) return karatsuba(b, a);
	if (an == 0 || bn == 0) return vector<int>();
	if (an <= 50) return multiply(a, b);
	int half = an / 2;
	//a�� b�� �ؿ��� half �ڸ��� �������� �и��Ѵ�.
	vector<int> a0(a.begin(), a.begin() + half);
	vector<int> a1(a.begin() + half, a.end());
	vector<int> b0(b.begin(), b.begin() + min<int>(half, bn));
	vector<int> b1(b.begin() + min<int>(half, bn), b.end());
	//z2 = a1*b1
	vector<int> z2 = karatsuba(a1, b1);
	//z0 = a0*b0
	vector<int> z0 = karatsuba(a0, b0);
	//a0 = a0+a1, b0 = b0+b1
	addTo(a0, a1, 0); addTo(b0, b1, 0);
	//z1 = (a0*b0) -z0-z2;
	vector<int> z1 = karatsuba(a0, b0);
	subFrom(z1,z0);
	subFrom(z1, z2);
	//ret = z0+z1 * 10^half + z2*10^(half*2)
	vector<int> ret;
	addTo(ret, z0, 0);
	addTo(ret, z1, half);
	addTo(ret, z2, half + half);
	
	return ret;
}

int hugs(const string &members, const string &fans) {
	int N = members.size(), M = fans.size();
	vector<int> A(N), B(M);
	for (int i = 0; i < N; i++) A[i] = (members[i] == 'M');
	for (int i = 0; i < M; i++) B[M - i - 1] = (fans[i] == 'M');
	//���ڴ� 1, ���ڴ� 0�� �ִ´�.
	//B[M-i-1]�� �� ������ ������ ���� �ֱ� �����̴�.
	vector<int> C = karatsuba(A, B);
	int allHugs = 0;
	for (int i = N - 1; i < M; i++) {
		if (C[i] == 0) {
			allHugs++;
		}
	}
	return allHugs;
}


int main() {
	int C;
	cin >> C;
	for (int k = 0; k < C; k++) {
		string members;
		string fans;
		cin >> members;
		cin >> fans;
		cout << hugs(members, fans)<<endl;

	}

	system("pause");
	return 0;
}
*/