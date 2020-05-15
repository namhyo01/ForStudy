#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
/*
int cache[101][101];
string S, W;

bool matchMemorized(int w, int s);

int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		vector<string> temp;
		int count = 0;
		W.clear();
		cin >> W;
		int n;
		cin >> n;
		for (int k = 0; k < n; k++) {
			memset(cache, -1, sizeof(cache));
			S.clear();
			cin >> S;
			if (matchMemorized(0, 0)) {
				temp.push_back(S);
			}
		}
		sort(temp.begin(), temp.end());
		for (int k = 0; k < temp.size(); k++) {
			cout << temp[k] << endl;
		}

	}
	system("pause");
	return 0;
}

bool matchMemorized(int w, int s) {
	int &ret = cache[w][s];
	if (ret != -1) return ret;
	//W[w]와 S[s]를 맞춰 나간다.
	while (s < S.size() && w < W.size() && (W[w] == '?' || W[w] == S[s])) {
		w++; s++;
	}// 만약 반복문을 나갔다면 경우의 수는 이렇게 된다.
	//1. S의 사이즈가 와일드 카드 보다 작다.(false)
	//2. W의 사이즈가 비교할 문자열보다 작다(예외처리) => 이경우에는 S도 문자열 길이가 다 같아줘야한다.
	//3. 와일드카드 문자에 *이 있다.
	//4. 와일드카드랑 문자열이 서로 다른문자를 가진다.(?제외) = > false
	if (w == W.size()) return ret = (s == S.size()); //2번 처리
	if (W[w] == '*') {
		for (int skip = 0; skip + s <= S.size(); skip++) {
			if (matchMemorized(w + 1, skip + s))
				return ret = 1;
		}
	}
	return ret = 0;


}*/