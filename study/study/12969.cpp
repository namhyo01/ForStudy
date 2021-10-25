#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>

using namespace std;
/*
int N, K;
char ch[31];
bool dp[466][31][31][31];//이부분이 중요하다

bool solve(int cnt, int a, int b, int size) {
	if (size==N) {
		if (cnt==K) {
			cout << ch << endl;
			return true;
		}
		else{
			return false;
		}
	}
	
	if (dp[cnt][a][b][size]) // 이미 왔다간 곳이라면 실패라고 말해주자
		return false;
	dp[cnt][a][b][size] = true;
	ch[size] = 'A';
	if (solve(cnt, a + 1, b, size + 1)) return true;
	ch[size] = 'B';
	if (solve(cnt + a, a, b + 1, size + 1))return true;
	ch[size] = 'C';
	if (solve(cnt + a + b, a, b, size + 1))return true;
	return false;
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N >> K;
	
	if (!solve(0, 0, 0, 0)) {
		cout << "-1" << endl;
	}
	system("pause");
	return 0;
}*/