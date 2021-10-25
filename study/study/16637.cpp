#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
using namespace std;
/*
int N;
string s;
int max_ans;


int calc(int a, int b, char op) {
	if (op == '+')
		return a + b;
	if (op == '-')
		return a - b;
	return a*b;
}

void dfs(int idx, int num) {
	if (idx > N - 1) {
		max_ans = max(max_ans, num);
		return;
	}

	char op = idx == 0 ? '+' : s[idx - 1];
	if (idx + 2 < N) { // 괄호를 한다
		int operation = calc(s[idx] - '0', s[idx + 2] - '0', s[idx + 1]);
		dfs(idx + 4, calc(num, operation, op));
	}
	//괄호를 안하는 경우
	dfs(idx + 2, calc(num, s[idx] - '0', op));
}






int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	cin >> s;
	max_ans = INT_MIN;
	dfs(0, 0);
	cout << max_ans<<endl;

	system("pause");
	return 0;
}*/