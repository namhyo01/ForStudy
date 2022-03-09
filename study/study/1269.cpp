//#include<bits/stdc++.h>
//
//using namespace std;
//
//unordered_map<int, int> A, B;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int a, b;
//	cin >> a >> b;
//	vector<int> A_C,B_C;
//	while (a--) {
//		int c;
//		cin >> c;
//		if (A[c] == 0)
//			A[c]++;
//		A_C.push_back(c);
//	}
//
//	while (b--) {
//		int c;
//		cin >> c;
//		if (B[c] == 0)
//			B[c]++;
//		B_C.push_back(c);
//	}
//	int ans = 0;
//	for (int i = 0; i < A_C.size(); i++) {
//		if (B[A_C[i]] >= 1) {
//			continue;
//		}
//		ans++;
//	}
//	for (int i = 0; i < B_C.size(); i++) {
//		if (A[B_C[i]] >= 1)
//			continue;
//		ans++;
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}