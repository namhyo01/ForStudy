//#include <bits/stdc++.h>
//
//#define endl "\n"
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	long long N;
//	cin >> N;
//	long long ans = 0;
//	long long end = 9;
//	int jari = 1;
//	for (int i = 1;;) {
//		if (N <= end) {
//			//cout << i << endl;
//			ans += ((N - i + 1)*jari);
//			break;
//		}
//		else {
//			ans += ((end - i + 1)*jari);
//			jari++;
//			i *= 10;
//			if (i == 1000000000)
//				end = 2000000000;
//			else
//				end = i * 10 - 1;
//			//cout <<"i : "<<i<< "end : " << end << endl;
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}