//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, M;
//
//int city[51][51];
//vector<pair<int, int> >house;
//vector<pair<int, int> >chicken;
//vector<pair<int, int> > temp;
//
//bool checked[14];
//int ans = INT_MAX;
//
//
//int distance() {
//	int Sum = 0;
//	for (int i = 0; i < house.size(); i++) {//모든 집에서 최소한의 거리를 찾자
//		int x = house[i].first;
//		int y = house[i].second;
//		int dist = INT_MAX;
//		for (int j = 0; j < M; j++) {
//			int dx = abs(x - temp[j].first);
//			int dy = abs(y - temp[j].second);
//			dist = min(dist, dx + dy);
//		}
//		Sum += dist;
//
//	}
//	return Sum;
//}
//
//
//
//void select_chicken(int start, int cnt) {
//	if (cnt == M)
//	{
//		ans = min(ans, distance());
//		return;
//	}
//	for (int i = start; i < chicken.size(); i++) {//조합하기
//		if (!checked[i]) {
//			checked[i] = true;
//			temp.push_back(chicken[i]);
//			select_chicken(i, cnt + 1);
//			checked[i] = false;
//			temp.pop_back();
//		}
//	}
//
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> city[i][j];
//			if (city[i][j] == 1) {
//				house.push_back(make_pair(i, j));
//			}
//			if (city[i][j] == 2) {
//				chicken.push_back(make_pair(i, j));
//			}
//		}
//	}
//	select_chicken(0, 0);
//	cout << ans << endl;
//
//
//	system("pause");
//	return 0;
//}