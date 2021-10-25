#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
/*
vector<int> v;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int A[100001];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
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
	for (auto temp : v) {
		cout << temp << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}*/