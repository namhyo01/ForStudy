//#include<bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int N;
//vector<int> budget;
//int M;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	long long tot = 0;
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//		budget.push_back(temp);
//		tot += temp;
//	}
//	sort(budget.begin(), budget.end());
//	cin >> M;
//	if (tot < M) {
//		cout << budget[N - 1]<<endl;
//	}
//	else {
//		int i = 0,j=budget[N-1];
//		int ans = 0;
//		int sum = 0;
//		while (i <= j) {
//			sum = 0;
//			int mid = (i + j) / 2;
//			for (int k = 0; k < N; k++) {
//				sum += min(budget[k], mid);
//			}
//			if (sum <= M) {
//				ans = mid;
//				i = mid + 1;
//			}
//			else {
//				j = mid - 1;
//			}
//
//		}
//		cout << ans << endl;
//	}
//	system("pause");
//	return 0;
//}