//#include <bits/stdc++.h>
//using namespace std;
//
//#define endl "\n"
//
//int N, M;
//bool check[2001];
//vector<int> arr[2001];
//bool pass = false;
//
//void dfs(int start, int cnt) {
//	if (cnt == 4) {
//		pass = true;
//		return;
//	}
//	for (int i = 0; i < arr[start].size(); i++) {
//		if (!check[arr[start][i]]) {
//			check[arr[start][i]] = true;
//			dfs(arr[start][i], cnt + 1);
//			check[arr[start][i]] = false;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		arr[a].push_back(b);
//		arr[b].push_back(a);
//	}
//	for (int i = 0; i < N; i++) {
//		memset(check, false, sizeof(check));
//		check[i] = true;
//		dfs(i, 0);
//		check[i] = false;
//		if (pass) {
//			break;
//		}
//	}
//	if (pass)
//		cout << 1 << endl;
//	else
//		cout << 0 << endl;
//	system("pause");
//	return 0;
//}