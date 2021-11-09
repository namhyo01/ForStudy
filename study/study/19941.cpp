//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N, K;
//int ans;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K;
//	char ch[20001];
//	bool check[20001] = { false, };
//	for (int i = 0; i < N; i++) {
//		cin >> ch[i];
//		if (ch[i] == 'H')
//			check[i] = true;
//
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (ch[i] == 'P') {
//			for (int j = -K+i; j < K + 1+i; j++) {
//				if (j < 0 || j >= N) {
//					continue;
//				}
//					
//				if (ch[j] == 'H' && check[j]) {
//					check[j] = false;
//					//cout <<"j :"<<  j<<"i "<<i << endl;
//					ans++;
//					break;
//				}
//			}
//		}
//	}
//
//
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}