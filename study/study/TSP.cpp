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
		return currentLength + dist[path[0]][path.back()];

}

int main() {

	int C;
	cin >> C;
	for (int l = 0; l < C; l++) {
		cin >> N;
		vector<vector<double> >cities(N, vector<double>(N, 0));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				cin >> cities[i][j];
			}
		}
	}
	system("pause");
	return 0;
}