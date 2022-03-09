//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, m;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m;
//	
//	priority_queue<int,vector<int>,greater<int> > ans;
//	for (int k = 0; k < n; k++) {
//		int P, L;
//		priority_queue<int> pq;
//		cin >> P>>L;
//		
//		for (int i = 0; i < P; i++) {
//			int temp;
//			cin >> temp;
//			pq.push(-temp);
//		}
//		if (P - L < 0) {
//			ans.push(1);
//		}
//		else {
//			int loop = P - L + 1;
//			int temp;
//			while (loop--) {
//				temp = pq.top();
//				pq.pop();
//			}
//			ans.push(-temp);
//		}
//	}
//	int cnt = 0;
//	while (!ans.empty()) {
//		int temp = ans.top();
//		if (temp <= m) {
//			ans.pop();
//			m -= temp;
//			cnt++;
//		}
//		else {
//			break;
//		}
//
//	}
//	cout << cnt << endl;
//	system("pause");
//	return 0;
//}