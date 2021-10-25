#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
/*
using namespace std;
int N;
int A[1000002];
vector <int>v;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++) {
		if (v.empty() || v.back() < A[i]) {
			v.push_back(A[i]);
		}
		else if (v.back() > A[i]) {
			auto temp = lower_bound(v.begin(), v.end(), A[i]);
			v[temp - v.begin()] = A[i];

		}
	}
	cout << v.size() << endl;
	system("pause");
	return 0;
}*/