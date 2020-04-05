// �����ϴ� ���ǿ� ����

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
int N; // ������ ��

double shortestPath(vector<int>&path, vector<bool>&visit, double currentLength) {
	//������� : ��� ������ �� �鸮�� ���۵��÷� ���ư��� �����Ѵ�
	if (path.size() == N)
		return currentLength ;
	double ret = INF; // �ſ� ū��(�ּҰ��� ã���Ŵ� ū������ �ʱ�ȭ)
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