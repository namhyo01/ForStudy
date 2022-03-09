//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//
//int N, L;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> L;
//	int t, x = -1, iter = -1;
//	for (int i = L; i <= 100; i++) {
//		t = (i - 1)*i / 2;
//		if ((N - t) % i == 0 && (N - t) / i >= 0) {
//			x = (N - t) / i;
//			iter = i;
//			break;
//		}
//	}
//	if (x == -1) cout << -1 << endl;
//	else
//		for (int i = 0; i < iter; i++) cout << x + i << ' ';
//
//
//	system("pause");
//	return 0;
//}