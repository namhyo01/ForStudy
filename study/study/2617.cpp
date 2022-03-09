//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int N,M;
//vector<int> heavy[100];
//vector<int> light[100];
//bool visit[2][100];
//bool check[100];
//int dfs(int number, int what) {
//	int rank = 1;
//	if (what == 0) {
//		for (int i = 0; i < heavy[number].size(); i++) {
//			if (!visit[what][heavy[number][i]]) {
//				visit[what][heavy[number][i]] = true;
//				rank += dfs(heavy[number][i], 0);
//			}
//		}
//	}
//	else {
//		for (int i = 0; i < light[number].size(); i++) {
//			if (!visit[what][light[number][i]]) {
//				visit[what][light[number][i]] = true;
//				rank += dfs(light[number][i], 1);
//			}
//		}
//	}
//	return rank;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		heavy[a].push_back(b);
//		light[b].push_back(a);
//	}
//	for (int i = 1; i <= N; i++) {
//		memset(visit, false, sizeof(visit));
//		visit[0][i] = visit[1][i] = true;
//		int high = dfs(i, 0);
//		int los= dfs(i, 1);
//		if (high > (N + 1) / 2 || los > (N + 1) / 2)
//			check[i] = true;
//	}
//	int result = 0;
//	for (int i = 1; i <= N; i++)
//		if (check[i])
//			result++;
//	cout << result << endl;
//	system("pause");
//	return 0;
//}