//#include <bits/stdc++.h>
//using namespace std;
//
//int gcd(int a, int b) {
//	return b ? gcd(b, a%b) : a;
//}
//bool check[2001][2001];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int D1, D2;
//	int ans = 0;
//	cin >> D1 >> D2;
//	for (int i = D1; i <= D2; i++) {
//		for (int j = 1; j <= i; j++) {
//			int common = gcd(i, j);
//			if (!check[i / common][j / common]) {
//				ans++;
//				check[i / common][j / common] = true;
//			}
//		}
//	}
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}