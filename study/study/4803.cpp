//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//vector<int> v[501];
//bool vv[501];
//
//bool dfs(int start, int before) {
//	vv[start] = true;
//	for (int i = 0; i < v[start].size(); i++) {
//		int ch = v[start][i];
//		if (ch == before) continue;
//		if (vv[ch]) return false; //사이클 발생(이미 왔던 곳이니)
//		if (!dfs(ch, start)) return false; // cycle발생 확인
//	}
//	return true;
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int n, m, num = 1;
//	while (1) {
//		cin >> n >> m;
//		if (n == 0 && m == 0) break;
//		int ans = 0; // 정답
//		memset(vv, false, sizeof(vv));
//		for (int i = 1; i <= n; i++) v[i].clear();
//		for (int i = 0; i < m; i++) {
//			int a, b;
//			cin >> a >> b;
//			v[a].push_back(b);
//			v[b].push_back(a);
//		}
//		for (int i = 1; i <= n; i++) {
//			if (!vv[i]) {
//				if(dfs(i, 0))
//					ans++;
//			}
//		}
//
//		cout << "Case " << num++;
//		if (ans == 0) cout << ": No trees."<<endl;
//		else if (ans == 1) cout << ": There is one tree."<<endl;
//		else cout << ": A forest of " << ans << " trees." << endl;
//
//	}
//
//	system("pause");
//	return 0;
//}