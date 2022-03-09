//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	unsigned long long n, k;
//	cin >> n >> k;
//	double value = pow(n + 2, 2) - 4 * k;
//	if (value - int(value) > 0.0) {
//		cout << "NO" << endl;
//	}
//	else {
//		int ans1 = ((n + 2) + sqrt(value)) / 2;
//		int ans2 = ((n + 2) - sqrt(value)) / 2;
//		if (ans1 > 0 && ans2 > 0 && (ans1-int(ans1)==0) && (ans2-int(ans2)==0))
//			cout << "YES"<<endl;
//		else cout << "NO" << endl;
//	}
//	system("pause");
//	return 0;
//}