//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//vector<int> v[100001];
//bool visit[100001];
//int num[100001];
//int node, query, root;
//
//int dfs(int n) {
//	int &ret = num[n];
//	if (ret != 0) return ret;
//	visit[n] = true;
//	int temp = 1;
//	for (int i = 0; i < v[n].size(); i++) {
//		int next = v[n][i];
//		if (visit[next]) continue; //이미 왔던곳
//		temp += dfs(next);
//	}
//	ret = temp;
//	return ret;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> node >> root >> query;
//	for (int i = 0; i < node - 1; i++) {
//		int a, b;
//		cin >> a >> b;
//		v[a].push_back(b);
//		v[b].push_back(a);
//	}
//	dfs(root);
//	for (int i = 0; i < query; i++) {
//		int a;
//		cin >> a;
//		cout << num[a] << endl;
//	}
//	system("pause");
//	return 0;
//}