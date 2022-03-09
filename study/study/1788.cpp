//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//int dp[2000002];
//
//int Fibonacci(int n) {
//	if (n == 1000000) return 0;
//	int &ret = dp[n];
//	if (ret != 0) return ret;
//	return ret = (Fibonacci(n - 1) + Fibonacci(n - 2))%1000000000;
//}
//int Fibonacci1(int n) {
//	if (n == 1000000) return 0;
//	int &ret = dp[n];
//	if (ret != 0) return ret;
//	return ret = (Fibonacci1(n + 2) - Fibonacci1(n + 1)) % 1000000000;
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);;
//	cin >> n;
//	dp[1 + 1000000] = 1;
//	dp[1000000 - 1] = 1;
//	if (n >= 0)
//	{
//		Fibonacci(n + 1000000);
//		
//	}
//	else {
//		Fibonacci1(n+1000000);
//	}
//	if (dp[n + 1000000] == 0) {
//		cout << 0 << endl;
//	}
//	else if (dp[n + 1000000] > 0)
//		cout << 1 << endl;
//	else
//		cout << -1 << endl;
//	cout << abs(dp[n + 1000000]) % 1000000000 << endl;
//	system("pause");
//	return 0;
//}