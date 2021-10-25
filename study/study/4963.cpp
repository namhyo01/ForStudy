#include <bits/stdc++.h>

using namespace std;
/*/
#define endl "\n"

int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[] = { 1, 0, -1, 1, -1, -1, 0, 1 };


int w, h;
int island[52][52];

bool check[52][52];
int cnt = 0;

void dfs(int x, int y) {
	check[x][y] = true;
	for (int i = 0; i < 8; i++) {
		int next_x = x + dx[i];
		int next_y = y + dy[i];
		if (next_x >= 0 && next_y >= 0 && next_x < h&&next_y < w) {
			if (!check[next_x][next_y] && island[next_x][next_y] == 1) {
				check[next_x][next_y] = true;
				dfs(next_x, next_y);
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	while (1) {
		memset(check, false, sizeof(check));
		memset(island, 0, sizeof(island));
		queue<pair<int, int> > bfs;
		cnt = 0;
		cin >> w >> h;
		if (w == 0 && h == 0)
			break;
		for (int i = 0; i < h; i++)
			for (int j = 0; j < w; j++)
				cin >> island[i][j];
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (island[i][j] == 1 && !check[i][j])
				{
					bfs.push(make_pair(i, j));
					cnt++;
					while (!bfs.empty()) {
						int x = bfs.front().first;
						int y = bfs.front().second;
						bfs.pop();
						for (int ll = 0; ll < 8; ll++) {
							int next_x = x + dx[ll];
							int next_y = y + dy[ll];
							if (next_x >= 0 && next_y >= 0 && next_x < h&&next_y < w) {
								if (!check[next_x][next_y] && island[next_x][next_y] == 1) {
									check[next_x][next_y] = true;
									bfs.push(make_pair(next_x, next_y));
								}
							}
						}
					}
				}
			}
		}

		cout << cnt << endl;

	}



	system("pause");
	return 0;
}*/