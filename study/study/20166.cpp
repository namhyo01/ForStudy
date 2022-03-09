//#include <bits/stdc++.h>
//
//using namespace std;
//
//char map1[11][11];
//int N, M, K;
//unordered_map<string,int> likes;
//int ans = 0;
//
//int dx[] = { 0,0,1,-1,1,1,-1,-1 };
//int dy[] = { 1,-1,0,0,1,-1,1,-1 };
//string likeit;
//void dfs(int x, int y) {
//	
//	if (likeit.size() > 5) return;
//	auto iter = likes.find(likeit);
//	if (iter != likes.end()) {//Ã£À¸¸é
//		likes[likeit]++;
//	}
//
//
//	for (int i = 0; i < 8; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= N) nx = 0;
//		if (nx <0) nx = N - 1;
//		if (ny >= M) ny = 0;
//		if (ny <0) ny = M - 1;
//		likeit.push_back(map1[nx][ny]);
//		dfs(nx, ny);
//		likeit.pop_back();
//	}
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> K;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map1[i][j];
//		}
//	}
//	vector<string> temp;
//	for (int i = 0; i < K; i++) {
//		string x;
//		cin >> x;
//		temp.push_back(x);
//		likes[x] = 0;
//	}
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			likeit = "";
//			likeit.push_back(map1[i][j]);
//			dfs(i, j);
//		}
//	}
//	for (int i = 0; i < K; i++) {
//		cout << likes[temp[i]] << endl;
//	}
//	system("pause");
//	return 0;
//}