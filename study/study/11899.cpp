//#include <bits/stdc++.h>
//
//using namespace std;
//int cnt = 0;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	stack<int> st;
//	string s;
//	cin >> s;
//	int ans = 0;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '(') {
//			st.push(1);
//		}
//		else {
//			if (st.empty()) {
//				ans++;
//			}
//			else {
//				st.pop();
//			}
//		}
//	}
//	while (!st.empty()) {
//		ans++;
//		st.pop();
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}