#include <bits/stdc++.h>

using namespace std;
/*
#define endl "\n"
#define INF 987645321


int N, E;
vector<pair<int, int> >vec[801];
int result[801];
bool check[801];
void dijkstra(int start) {
	result[start] = 0;
	priority_queue<pair<int, int> >pq;
	pq.push(make_pair(0, start));

	while (!pq.empty()) {
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		for (int i = 0; i < vec[current].size(); i++) {
			int next = vec[current][i].first;
			int nextdis = vec[current][i].second + distance;
			if (nextdis < result[next]) {
				result[next] = nextdis;
				pq.push(make_pair(-nextdis, next));
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> N >> E;
	while (E--) {
		int a, b, c;
		cin >> a >> b >> c;
		vec[a].push_back(make_pair(b, c));
		vec[b].push_back(make_pair(a, c));
	}
	for (int i = 1; i <= N; i++)
		result[i] = INF;
	int n1, n2;
	cin >> n1 >> n2;

	
	
	bool flag1, flag2;
	flag1 = flag2 = true;
	dijkstra(1);
	int route1, route2;
	route1 = result[n1];
	route2 = result[n2];
	if (route1 == INF) flag1 = false;
	if (route2 == INF) flag2 = false;
	for (int i = 1; i <= N; i++)
		result[i] = INF;
	dijkstra(n1);
	if (flag1)route1 = route1 + result[n2];
	if (flag2)route2 = route2 + result[n2];
	for (int i = 1; i <= N; i++)
		result[i] = INF;
	dijkstra(n2);
	if (flag1) route1 += result[N];
	for (int i = 1; i <= N; i++)
		result[i] = INF;
	dijkstra(n1);
	if (flag2) route2 += result[N];

	if (!flag1 && !flag2) cout << -1 << endl;
	else if (min(route1,route2) == INF) cout << -1 << endl;
	else cout << min(route1,route2) << endl;
	
	system("pause");
	return 0;
}*/