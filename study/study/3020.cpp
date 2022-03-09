//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N, H;
//
//vector<int> arr,arr2;
//int result=INT_MAX, cnt;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> H;
//	arr.resize(N/2);
//	arr2.resize(N / 2);
//	for (int i = 0; i < N/2; i++) {
//		cin >> arr[i]>>arr2[i];
//	}
//
//	sort(arr.begin(), arr.end());
//	sort(arr2.begin(), arr2.end());
//	for (int i = 1; i <= H; i++) {
//		int val = lower_bound(arr.begin(), arr.end(), i)-arr.begin();
//		
//		val += upper_bound(arr2.begin(), arr2.end(), H - i) - arr2.begin();
//		val = N - val;
//		if (result == val) {
//			cnt++;
//		}
//		if (result > val) {
//			cnt = 1;
//			result = val;
//		}
//
//	}
//	cout << result << " " << cnt << endl;
//
//
//	system("pause");
//	return 0;
//}