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
int N, M;
string nohear[500001];
string nosee[500001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N >> M;
	vector <string> word;
	vector<string> result;
	while (N--) {
		string temp;
		cin >> temp;
		word.push_back(temp);
	}
	sort(word.begin(), word.end());
	int cnt = 0;
	while (M--) {
		string temp;
		cin >> temp;
		if (binary_search(word.begin(), word.end(), temp)) {//찾았으면
			cnt++;
			result.push_back(temp);
		}

	}
	sort(result.begin(), result.end());
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++) {
		cout << result[i] << endl;
	}

	system("pause");
	return 0;
}*/