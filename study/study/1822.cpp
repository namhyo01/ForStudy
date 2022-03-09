//#include <bits/stdc++.h>
//
//using namespace std;
//
//int na, nb;
//int A[500001];
//unordered_map<int, int> As;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> na >> nb;
//	
//	for (int i = 0; i < na; i++) {
//		cin >> A[i];
//	}
//	sort(A, A + na);
//	for (int i = 0; i < na; i++) {
//		As[A[i]]++;
//	}
//	int cnt = na;
//	for (int i = 0; i < nb; i++) {
//		int temp;
//		cin >> temp;
//		if (As[temp] == 1) {
//			cnt--;
//		}
//		As[temp]++;
//	}
//	cout << cnt << endl;
//	if (cnt != 0) {
//		for (int i = 0; i < na; i++) {
//			if (As[A[i]] == 1)
//			{
//				cout << A[i] << " ";
//			}
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}