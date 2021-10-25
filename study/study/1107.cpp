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
bool wrong[11];

bool check(string a) {
	for (int i = 0; i < a.length(); i++) {
		if (wrong[a[i]-'0']) {
			return false;
		}
	}
	return true;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int num;
	cin >> num;
	int M;
	cin >> M;
	int channel = 100;
	for (int i = 0; i < M; i++) {
		int temp;
		cin >> temp;
		wrong[temp] = true;
	}
	
	int Min = abs(100 - (num));

	for (int i = 0; i <= 1000000; i++) {
		string temp = to_string(i);
		if (check(temp)) {//겹치는게 없다
			int s_num = abs(num - i) + temp.length();
			Min = min(s_num, Min);
		}
	}
	cout << Min << endl;

	system("pause");
	return 0;


}*/