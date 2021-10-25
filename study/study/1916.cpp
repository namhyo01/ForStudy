#include <bits/stdc++.h>
using namespace std;

/*
#define endl "\n"
#define INF 987654321

int N,M;
vector<pair<int, int> > idj_list[1001];
int result[1001];
void dijkstra(int start,int finish) {
	result[start] = 0;
	priority_queue<pair<int, int> >pq;
	pq.push(make_pair(0, start));
	while (!pq.empty()) {
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		if (current == finish)
			break;
		for (int i = 0; i < idj_list[current].size(); i++) {
			int next = idj_list[current][i].first;
			int nextdis = distance + idj_list[current][i].second;
			if (nextdis < result[next]) {
				result[next]=nextdis;
				pq.push(make_pair(-nextdis, next));
			}
		}
	}
}


int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N;
	cin >> M;
	while (M--) {
		int u, v, w;
		cin >> u >> v >> w;
		idj_list[u].push_back(make_pair(v, w));
	}
	for (int i = 1; i <= N; i++)
		result[i] = INF;
	int start, finish;
	cin >> start >> finish;
	dijkstra(start,finish);
	cout << result[finish] << endl;

	system("pause");
	return 0;
}*/