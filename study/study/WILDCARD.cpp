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
	//W[w]�� S[s]�� ���� ������.
	while (s < S.size() && w < W.size() && (W[w] == '?' || W[w] == S[s])) {
		w++; s++;
	}// ���� �ݺ����� �����ٸ� ����� ���� �̷��� �ȴ�.
	//1. S�� ����� ���ϵ� ī�� ���� �۴�.(false)
	//2. W�� ����� ���� ���ڿ����� �۴�(����ó��) => �̰�쿡�� S�� ���ڿ� ���̰� �� ��������Ѵ�.
	//3. ���ϵ�ī�� ���ڿ� *�� �ִ�.
	//4. ���ϵ�ī��� ���ڿ��� ���� �ٸ����ڸ� ������.(?����) = > false
	if (w == W.size()) return ret = (s == S.size()); //2�� ó��
	if (W[w] == '*') {
		for (int skip = 0; skip + s <= S.size(); skip++) {
			if (matchMemorized(w + 1, skip + s))
				return ret = 1;
		}
	}
	return ret = 0;


}*/