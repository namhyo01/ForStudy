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
using namespace std;
/*
bool check[100001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin >> N >> K;
	queue<pair<int, int> >pq;
	pq.push(make_pair(N, 0));
	while (!pq.empty()) {
		int num = pq.front().first;
		int cnt = pq.front().second;
		pq.pop();
		if (num == K) {
			cout << cnt << endl;
			break;
		}
		int x1 = num - 1;
		int x2 = num + 1;
		int x3 = num * 2;
		if (x1 >= 0 && !check[x1]) {
			pq.push(make_pair(x1, cnt + 1));
			check[x1] = true;
		}
		if (x2 <= K && !check[x2]) {
			pq.push(make_pair(x2, cnt + 1));
			check[x2] = true;
		}
		if (x3 <= K + 1 && !check[x3]) {
			pq.push(make_pair(x3, cnt + 1));
			check[x3] = true;
		}
	}


	system("pause");
	return 0;

}*/