#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
using namespace std;
/*
int N;
bool visited[101];
int arr[101];
vector<int> res;

void dfs(int start, int cur) {
	if (!visited[cur]) {
		visited[cur] = true;
		dfs(start, arr[cur]);
	}
	else if (start == cur) {
		res.push_back(start);
		return;
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> arr[i];
	for (int i = 1; i <= N; i++) {
		memset(visited, false, sizeof(visited));
		dfs(i, i);
	}
	cout << res.size() << endl;
	for (int i = 0; i < res.size(); i++)
		cout << res[i] << endl;
	system("pause");
	return 0;

}*/