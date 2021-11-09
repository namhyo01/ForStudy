//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int N, M;
//	cin >> N >> M;
//	unordered_map<string, int> oop;
//	for (int i = 0; i < N; i++) {
//		string s;
//		cin >> s;
//		oop[s]++;
//	}
//	//vector<string> test(10001);
//	int cnt = 0;
//	for (int i = 0; i < M; i++)
//	{
//		string s;
//		cin >> s;
//		if (oop[s] != 0)
//			cnt++;
//	}
//	cout << cnt << endl;
//
//	system("pause");
//	return 0;
//}