//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int N;
//int arr[500001];
//set<int> s;
//unordered_map<int, int> uo;
//void avg() {
//	long long temp = 0;
//	for (int i = 0; i < N; i++) {
//		temp += arr[i];
//	}
//	int ans = round((temp / (double)N));
//	cout << ans << endl;
//}
//void mid() {
//	int temp = N / 2;
//	cout << arr[temp] << endl;
//}
//void many() {
//	int cnt = 0;
//	int ans = 0;
//	int k = 0;
//	for (auto it = s.begin(); it != s.end(); it++) {
//		
//		if (cnt < uo[*it + 4000])
//		{
//			cnt = uo[*it + 4000];
//			ans = *it;
//			k = 0;
//		}
//		else if (cnt == uo[*it + 4000]) {
//			k++;
//			if (k == 1) {
//				ans = *it;
//			}
//		}
//	}
//	cout << ans << endl;
//}
//void ran() {
//	cout << arr[N - 1] - arr[0] << endl;
//}
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> arr[i];
//		uo[arr[i] + 4000]++;
//		s.insert(arr[i]);
//	}
//
//	sort(arr, arr + N);
//	avg();
//	mid();
//	many();
//	ran();
//	system("pause");
//	return 0;
//}