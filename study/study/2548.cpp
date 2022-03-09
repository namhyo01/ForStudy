//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	cin >> N;
//	vector<int> num;
//	int ans = INT_MAX;
//	int real_ans = 0;
//	for (int i = 0; i < N; i++) {
//		int temp;
//		cin >> temp;
//		num.push_back(temp);
//	}
//	sort(num.begin(), num.end());
//	for (int i = 0; i < N; i++) {
//		int sum_ans = 0;
//		for (int j = 0; j < N; j++) {
//			sum_ans += abs(num[i] - num[j]);
//		}
//		if (sum_ans < ans) {
//			ans = sum_ans;
//			real_ans = num[i];
//		}
//		else if (sum_ans == ans)
//			continue;
//		else {
//			cout << real_ans << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	cout << real_ans << endl;
//	system("pause");
//	return 0;
//}