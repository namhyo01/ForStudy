#include <iostream>
#include <algorithm>
#include <vector>
#include <stdio.h>
#include <memory.h>
#include <queue>
/*
using namespace std;
#pragma warning(disable:4996)
vector<pair<int, int> > list_dij[20005];
int result[20005];
int INF = 987654321;
void dijkstra(int start) {
	result[start] = 0;
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(start, 0));

	while (!pq.empty()) {
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();

			for (int i = 0; i < list_dij[current].size(); i++) {
				//선택 노드의 인접노드
				int next = list_dij[current][i].first;
				int nextdis = distance + list_dij[current][i].second;
				if (nextdis < result[next]) {
					result[next] = nextdis;
					pq.push(make_pair(next, -nextdis));
				}
			
		}

	}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int V, E,start;
	cin >> V >> E >> start;


	while (E--) {
		int u, v, w;
		cin >> u >> v >> w;
		//scanf("%d %d %d", &u, &v, &w);
		list_dij[u].push_back(make_pair(v, w));
	}
	for (int i = 1; i <= V; i++)
		result[i] = INF;
	dijkstra(start);
	for (int i = 1; i <= V; i++) {
		if (result[i] == INF)
			cout << "INF" << "\n";
		//printf("INF\n");
		else
			cout << result[i] << endl;
			//printf("%d\n", result[i]);
	}

	system("pause");
	return 0;
}*/