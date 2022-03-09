//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//int N;
//
//int mod = 1000000007;
//
////거듭제곱이용한 분할정복
//long long solve(int a,int b) {
//	if (b == 0) return 1;
//
//	long long res = solve(a, b / 2);
//	if (b & 1)return (res*res*a)%mod;
//	else return (res*res)%mod;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	while (T--) {
//		cin >> N;
//		if (N == 1||N==2)
//			cout << 1 << endl;
//		else
//			cout << solve(2,N-2)<< endl;
//	}
//	system("pause");
//	return 0;
//}