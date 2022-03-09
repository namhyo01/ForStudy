//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string s;
//	cin >> s;
//	int cnt_x=0;
//	string ans;
//	for (int i = 0; i < s.size(); i++) {
//		if (s[i] == '.') {
//			while (cnt_x != 0) {
//				if (cnt_x >= 4) {
//					ans += "AAAA";
//					cnt_x -= 4;
//				}
//				else if (cnt_x % 2 == 0) {
//					ans += "BB";
//					cnt_x -= 2;
//				}
//				else {
//					cout << "-1" << endl;
//					system("pause");
//					return 0;
//				}
//			}
//			ans += ".";
//		}
//		else {
//			cnt_x++;
//		}
//	}
//	while (cnt_x != 0) {
//		if (cnt_x >= 4) {
//			ans += "AAAA";
//			cnt_x -= 4;
//		}
//		else if (cnt_x % 2 == 0) {
//			ans += "BB";
//			cnt_x -= 2;
//		}
//		else {
//			cout << "-1" << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}