//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//int A[10001];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i];
//	}
//
//	sort(A, A + N);
//	long long ans = 0;
//	for (int i = 0; i < N - 2; i++) {
//		int choose = -A[i];
//		int start = i + 1;
//		int end = N - 1;
//		int cnt = 0;
//		while (start < end) {
//			int sum_two = A[start] + A[end];
//			if (sum_two == choose) {
//				if (A[start] == A[end]) {
//					ans += end - start;
//					cnt = 0;
//				}
//				else {
//					if (cnt == 0) {
//						int idx = end;
//						while (idx > start && (choose == A[start] + A[idx--]))
//							cnt++;
//					}
//					ans += cnt;
//				}
//				start++;
//			}
//			else if (sum_two < choose) {
//				start++;
//				cnt = 0;
//			}
//			else {
//				end--;
//				cnt = 0;
//			}
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}