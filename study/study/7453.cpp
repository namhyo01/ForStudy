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
long long arr[4][4001];
int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	vector<long long> three_four;
	vector<long long> one_two;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < 4; j++)
			cin >> arr[j][i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			three_four.push_back(arr[2][i] + arr[3][j]);
			one_two.push_back(arr[0][i] + arr[1][j]);
		}
	}
	sort(three_four.begin(), three_four.end());
	sort(one_two.begin(), one_two.end());
	long long result = 0;
	for (int i = 0; i < one_two.size(); i++) {
		int begin = lower_bound(three_four.begin(), three_four.end(), -one_two[i]) - three_four.begin();
		int end = upper_bound(three_four.begin(), three_four.end(), -one_two[i]) - three_four.begin();
		result += (end - begin);
	}
	cout << result << endl;
	system("pause");
	return 0;
}*/