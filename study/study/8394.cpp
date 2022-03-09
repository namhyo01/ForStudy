//#include <bits/stdc++.h>
//
//using namespace std;
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> aksu(10000001, 0);
//	//int aksu[10000001];
//	aksu[1] = 1;
//	aksu[2] = 2;
//	aksu[3] = 3;
//	aksu[4] = 5;
//	aksu[5] = 8;
//	for (int i = 6; i <= n; i++) {
//		aksu[i] = (aksu[i - 1] + aksu[i - 2]) % 10;
//	}
//	cout << aksu[n] << endl;
//	system("pause");
//	return 0;
//}