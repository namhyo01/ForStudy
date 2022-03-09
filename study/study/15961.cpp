//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int dish[3000002];
//int avail[3002];
//unordered_map<int, int> op;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int n, d, k, c;//초밥접시수, 초밥 가지수, 연속먹는, 쿠폰번호
//	cin >> n >> d >> k >> c;
//	for (int i = 0; i < n; i++) {
//		cin >> dish[i];
//	}
//	for (int i = 0; i < k - 1; i++) {
//		op[dish[i]]++;
//	}
//	int end = k - 1;
//	int start = 0;
//	int cnt, ans = 0;
//	for (int i = 0; i < n; i++) {
//		int del = dish[start];
//		int cur = dish[end%n];
//		op[cur]++;
//		int num = op.size();
//		if (op.find(c) == op.end()) { //못찾음
//			ans = max(ans, num + 1);
//		}
//		else {
//			ans = max(ans, num);
//		}
//		op[del]--; //제거
//		if (op[del] == 0) {
//			op.erase(op.find(del));
//		}
//		start++;
//		end++;
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}