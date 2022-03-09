//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int Q;
//	cin >> Q;
//	long long ans = 0;
//	unordered_map<string, priority_queue<int,vector<int>,less<int> >> pq;
//	while (Q--) {
//		int flag;
//		string name;
//		int k;
//		
//		cin >> flag;
//		if (flag == 1) {
//			cin >> name >> k;
//			for (int i = 0; i < k; i++) {
//				int C;
//				cin >> C;
//				pq[name].push(C);
//			}
//		}
//		else {
//			cin >> name >> k;
//			
//			for (int i = 0; i < k; i++) {
//				if (pq[name].size() == 0) {
//					break;
//				}
//				ans += pq[name].top();
//				pq[name].pop();
//			}
//		}
//	}
//	cout << ans << endl;
//	
//
//	system("pause");
//	return 0;
//}