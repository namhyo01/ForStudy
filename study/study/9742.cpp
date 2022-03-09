//#include <bits/stdc++.h>
//
//using namespace std;
//
//string a;
//int n;
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	
//	while (cin >> a >> n) {
//		int cnt = 0;
//		bool check = false;
//		string temp = a;
//		do {
//			cnt++;
//			if (cnt == n) {
//				cout <<temp<<" "<<n<<" = "<< a << endl;
//				check = true;
//				break;
//			}
//		} while (next_permutation(a.begin(), a.end()));
//		if (!check) {
//			cout << temp << " " << n << " = No permutation" << endl;
//		}
//	}
//
//	system("pause");
//	return 0;
//}