//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//
//int N;
//string cur, det;
//int result = INT_MAX;
//
//
////2번째꺼부터 키거나 아니면 첫번째꺼부터키거나
//
//void solve(bool first) {
//	string temp = cur;
//	int ans = 0;
//	if (first) { //첫번쨰 on
//		temp[0] = temp[0] == '0' ? '1' : '0';
//		temp[1] = temp[1] == '0' ? '1' : '0';
//		ans++;
//	}
//	for (int i = 1; i < N; i++) {
//		if (temp[i - 1] == det[i - 1]) continue;
//		temp[i-1] = temp[i-1] == '0' ? '1' : '0';
//		temp[i] = temp[i] == '0' ? '1' : '0';
//		if (i + 1 < N)
//			temp[i+1] = temp[i+1] == '0' ? '1' : '0';
//		ans++;
//	}
//	if (temp == det)
//		result = min(result, ans);
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	cin >> cur;
//	cin >> det;
//	
//	solve(true);
//	solve(false);
//
//	if (result == INT_MAX)
//		cout << -1 << endl;
//	else
//		cout << result << endl;
//	system("pause");
//	return 0;
//}