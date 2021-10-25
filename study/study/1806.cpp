#include <bits/stdc++.h>
using namespace std;
/*
#define endl "\n"
int num[100001];
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int N, S;
	cin >> N >> S;
	for (int i = 0; i < N; i++)
		cin >> num[i];
	int left = 0;
	int right = 0;
	//int mid = (left + right) / 2;
	int ans = INT_MAX;
	long long sum = 0;
	while (left <= right) {

		if (right >= N)
			break;

		if (sum >= S) {
			ans = min(ans, right - left);
			sum -= num[left++];
		}
		else {
			sum += num[right++];
		}


	}
	if (ans == INT_MAX)
		ans = 0;
	cout << ans << endl;

	system("pause"); 
	return 0;
}*/