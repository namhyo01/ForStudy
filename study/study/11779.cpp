#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#include <stdio.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <deque>
#include <set>
#include <sstream>
using namespace std;

/*
#define endl "\n"
#define INF 987654321


int n, m;
int go, stop;
vector<pair<int, int> >list_idj[1005];
int result[1005];
int route[1005];
void dijkstra(int start, int target) {
	result[start] = 0;
	priority_queue<pair<int, int> >pq;
	pq.push(make_pair(0, start));
	while (!pq.empty()) {
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		if (current == target)
			break;
		for (int i = 0; i < list_idj[current].size(); i++) {
			int next = list_idj[current][i].first;
			int nextdis = list_idj[current][i].second + distance;
			if (nextdis < result[next]) {
				result[next] = nextdis;
				pq.push(make_pair(-nextdis, next));
				route[next] = current; // 현재 경로 저장
			}
		}


	}



}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin >> n >> m;
	while(m--) {
		int u, v, w;
		cin >> u >> v >> w;
		list_idj[u].push_back(make_pair(v, w));
	}
	cin >> go >> stop;
	for (int i = 1; i <= n; i++) {
		result[i] = INF;
	}
	stack<int> temp;


	dijkstra(go,stop);
	for (int i = stop; i != go; i = route[i]) {
		temp.push(i);
	}
	temp.push(go);
	cout << result[stop] << endl;
	cout << temp.size() << endl;
	while (!temp.empty()) {
		cout << temp.top() << " ";
		temp.pop();
	}
	system("pause");
	return 0;
}*/