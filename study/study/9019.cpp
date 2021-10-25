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
int d[5];
int A, B;

int twice(int num) {
	int result = num * 2;
	if (result > 9999)
		return result % 10000;
	return result;
}
int minus_num(int num) {
	if (num == 0)
		return 9999;
	return num - 1;
}

int L_rotate(int num) {
	d[1] = num / 1000;
	d[2] = (num % 1000) / 100;
	d[3] = (num % 100) / 10;
	d[4] = (num % 10);
	int temp = d[1];
	d[1] = d[2];
	d[2] = d[3];
	d[3] = d[4];
	d[4] = temp;
	return 1000 * d[1] + 100 * d[2] + 10 * d[3] + d[4];
}
int R_rotate(int num) {
	d[1] = num / 1000;
	d[2] = (num % 1000) / 100;
	d[3] = (num % 100) / 10;
	d[4] = (num % 10);
	int temp = d[1];
	d[1] = d[4];
	d[4] = d[3];
	d[3] = d[2];
	d[2] = temp;
	return 1000 * d[1] + 100 * d[2] + 10 * d[3] + d[4];
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;

	while (T--) {
		bool check[10000] = { 0, };
		cin >> A >> B;
		
		queue<pair<int, string> > pq;
		pq.push(make_pair(A, ""));
		while (!pq.empty()) {
			int front = pq.front().first;
			string ll = pq.front().second;
			if (front == B) {
				cout << ll << endl;
				break;
			}
			pq.pop();
			int x1 = twice(front);
			int x2 = minus_num(front);
			int x3 = R_rotate(front);
			int x4 = L_rotate(front);
			if (!check[x1]) {
				check[x1] = true;
				string temp = ll;
				temp.append("D");
				pq.push(make_pair(x1, temp));
			}
			if (!check[x2]) {
				string temp = ll;
				check[x2] = true;
				temp.append("S");
				pq.push(make_pair(x2, temp));
			}
			if (!check[x4]) {
				check[x4] = true;
				string temp = ll;
				temp.append("L");
				pq.push(make_pair(x4, temp));
			}
			if (!check[x3]) {
				check[x3] = true;
				string temp = ll;
				temp.append("R");
				pq.push(make_pair(x3, temp));
			}

		}
	}


	system("pause");
	return 0;
}*/