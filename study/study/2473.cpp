//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//
//int N;
//vector<long long> arr;
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	arr.resize(N);
//	for (int i = 0; i < N; i++)
//		cin >> arr[i];
//	sort(arr.begin(), arr.end());
//	long long a, n, s, sum;
//	sum = LLONG_MAX;
//	for (int i = 0; i < N - 2; i++) {
//		int indx = arr[i];
//		int left = i+1;
//		int right = N-1;
//		while (left < right) {
//			long long temp = indx + arr[left] + arr[right];
//			if (temp == 0)
//			{
//				cout << indx << " " << arr[left << " " << right << endl;
//				return 0;
//			}
//			if (sum > abs(temp)) {
//				sum = abs(temp);
//				a = indx;
//				n = arr[left];
//				s = arr[right];
//			}
//			if (temp < 0) left++;
//			if (temp > 0) right--;
//		}
//
//	}
//	cout << a << " " << n << " " << s << endl;
//	system("pause");
//	return 0;
//}