//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int tt[100001];
//bool prime[100001];
//vector<int> real_prime;
//void erastoche(int num) {
//	for (int i = 2; i <= sqrt(num); i++) {
//		if (!prime[i])
//			continue;
//		for (int j = i*i; j < num; j+=i) {
//			prime[j] = false;
//		}
//	}
//	for (int i = 2; i < num; i++) {
//		if (prime[i])
//			real_prime.push_back(i);
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	memset(prime, true, sizeof(prime));
//	erastoche(100001);
//	while (T--) {
//		int num;
//		cin >> num;
//		for (int i = 0; i < real_prime.size(); i++) {
//			
//			int cnt = 0;
//			while (num%real_prime[i] == 0) { //안나눠질때까지
//				cnt++;
//				num /= real_prime[i];
//				if (num == 1) break;
//			}
//			if (cnt > 0) cout << real_prime[i] << " " << cnt << endl;
//			if (num == 1) break;
//		}
//		
//	}
//
//	system("pause");
//	return 0;
//}