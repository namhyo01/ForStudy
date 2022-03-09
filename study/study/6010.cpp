//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int n, q;
//	cin >> n >> q;
//	int sum = 0;
//	vector<int> v;
//	for (int i = 0; i < n; i++) {
//		int temp;
//		cin >> temp;
//		sum += temp;
//		v.push_back(sum-1);
//	}
//	for (int i = 0; i < q; i++) {
//		vector<int>::iterator it;
//		int temp;
//		cin >> temp;
//		it = lower_bound(v.begin(), v.end(), temp);
//		cout <<it - v.begin()+1 << endl;
//	}
//	system("pause");
//	return 0;
//}