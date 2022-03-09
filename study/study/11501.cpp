//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int T;
//	cin >> T;
//	while (T--) {
//		int N;
//		int cost = 0;
//		cin >> N;
//		int juga[100001];
//		int idx = 0;
//		int max_value = 0;
//		for (int i = 0; i < N; i++) {
//			cin >> juga[i];
//		}
//		for (int i = N - 1; i >= 0; i--) {
//			if (juga[i] < max_value) {
//				cost += max_value - juga[i];
//			}
//			else {
//				max_value = juga[i];
//			}
//		}
//		
//		cout << cost << endl;
//
//	}
//	
//	system("pause");
//	return 0;
//}