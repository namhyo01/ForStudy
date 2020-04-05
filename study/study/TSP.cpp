// 여행하는 외판원 문제

#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
#define INF 99999999
double dist[8][8];
int N; // 도시의 수

double shortestPath(vector<int>&path, vector<bool>&visit, double currentLength) {
	//기저사례 : 모든 마을을 다 들리면 시작도시로 돌아가고 종료한다
	if (path.size() == N)
		return currentLength ;
	double ret = INF; // 매우 큰값(최소값을 찾을거니 큰값으로 초기화)
	for (int next = 0; next < N; next++) {
		if (visit[next]) continue;
		int here = path.back();
		
		path.push_back(next);
		visit[next] = true;
		double cand = shortestPath(path, visit, currentLength + dist[here][next]);
		ret = min(ret, cand);
		visit[next] = false;
		path.pop_back();
	}
	return ret;

}

int main() {

	int C;
	cin >> C;
	
	for (int l = 0; l < C; l++) {
		cin >> N;

		//path.push_back(0);
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> dist[i][j];
			}
		}
		//printf("%.10lf\n", shortestPath(path, visit, 0));
		//cout << shortestPath(path, visit, 0) << endl;
		double answer = INF;
		for (int i = 0; i < N; i++) {
			vector<int> path(1, i);
			vector<bool> visit(N, false);
			visit[i] = true;
			answer = min(answer, shortestPath(path, visit, 0));

		}
		printf("%.10lf\n", answer);
	}


	system("pause");
	return 0;
}