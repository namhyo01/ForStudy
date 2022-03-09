//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	int ksg[100001];
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> ksg[i];
//	}
//	sort(ksg, ksg + N,greater<int>());
//	long long sum = 0;
//	for (int i = 0; i < N; i++) {
//		
//		if (i % 3 == 2)
//			continue;
//		sum += ksg[i];
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//}