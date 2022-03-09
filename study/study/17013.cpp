//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int prime[1000001];
//
//void isPrime() {
//	for (int i = 1; i <= 1000000; i++)
//		prime[i] = i;
//	for (int i = 2; i*i <= 1000000; i++) {
//		if (prime[i] == 0)
//			continue;
//		for (int j = i*i; j <= 1000000; j += i)
//			prime[j] = 0;
//			
//	}
//	
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	isPrime();
//	while (T--) {
//		int n;
//		int ans = 0;
//		cin >> n;
//		for (int i = 2; i <= n / 2; i++) {
//			if (prime[i] != 0 && prime[n - i] != 0)
//				ans++;
//			
//		}
//		cout << ans << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}