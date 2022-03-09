//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define MAX_N 7500000
//bool isPrime[MAX_N];
//void count_prime() {
//	
//	for (int i = 2; i <= sqrt(MAX_N); i++) {
//		if (isPrime[i]) {
//			for (int j = i*i; j <= MAX_N; j += i) {
//				isPrime[j] = false;
//			}
//		}
//	}
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int K;
//	cin >> K;
//	memset(isPrime, true, sizeof(isPrime));
//	isPrime[0] = false; isPrime[1] = false; 
//	int cnt = 0;
//	count_prime();
//	for (int i = 0; i <= MAX_N; i++) {
//		if (isPrime[i])
//		{
//			cnt++;
//			if (cnt == K)
//			{
//				cout << i;
//				break;
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}