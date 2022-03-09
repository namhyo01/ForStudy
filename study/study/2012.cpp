//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0);
//	int N;
//	cin >> N;
//	int num[50001];
//	for (int i = 0; i < N; i++) {
//		cin >> num[i];
//	}
//	sort(num, num + N);
//	long long sum = 0;
//	for (int i = 0; i < N; i++) {
//		sum += abs(num[i] - (i + 1));
//	}
//	cout << sum << endl;
//	system("pause");
//	return 0;
//
//}