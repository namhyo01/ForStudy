#include <bits/stdc++.h>
using namespace std;
/*
int N, S;
int num[41];
int mid;
int cnt;
map<int, int> mp;
void left_computation(int idx, int sum) {
	if (idx == mid) {
		mp[sum]++;
		return;
	}
	left_computation(idx + 1, sum);
	left_computation(idx + 1, sum + num[idx]);
}
void right_computation(int idx, int sum) {
	if (idx == N) {
		cnt += mp[S - sum];
		return;
	}
	right_computation(idx + 1, sum);
	right_computation(idx + 1, sum+num[idx]);

}
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	mid = N / 2;
	left_computation(0, 0);
	right_computation(mid,0);
	if (S == 0)
		cnt--;
	cout << cnt << endl;
	system("pause");
	return 0;
}*/