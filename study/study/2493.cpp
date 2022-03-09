//#include <bits/stdc++.h>
//
//#define endl "\n"
//
//using namespace std;
//
//
//int N;
//int tower;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	stack<pair<int, int> > sts;
//	for (int i = 1; i <= N; i++) {
//		cin >> tower;
//		while (!sts.empty()) {
//			if (tower < sts.top().second) {
//				cout << sts.top().first << " ";
//				break;
//			}
//			else {
//				sts.pop();
//			}
//		}
//		if (sts.empty())
//			cout << "0 ";
//		sts.push(make_pair(i, tower));
//	}
//	cout << endl;
//
//	system("pause");
//	return 0;
//}