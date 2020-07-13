#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
// 분할정복
vector<int> h;
// 왼쪽으로뻗어가고
// 오른쪽으로 뻗어가고
// 그 중간에 있는 것도 계산
int solve(int left, int right) {
	//판자가 하나인경우
	if (left == right)
		return h[left];
	int mid = (left + right) / 2; // 가운데 부분
	int ret = max(solve(left, mid), solve(mid + 1, right));
	int lo = mid, hr = mid + 1;// 중간 부분 계산
	int height = min(h[lo], h[hr]);
	ret = max(ret, height * 2);
	while (left<lo || right>hr) {
		if (right > hr && (lo == left || h[lo - 1] < h[hr + 1])) {
			++hr;
			height = min(height, h[hr]);
		}
		else {
			--lo;
			height = min(height, h[lo]);
		}
		ret = max(ret, height * (hr - lo + 1));
	}
	return ret;
}
/*
int main() {
	int C;
	cin >> C;
	for (int k = 0; k < C; k++) {
		int n;
		cin >> n;
		h.clear();
		for (int i = 0; i < n; i++) {
			int k;
			cin >> k;
			h.push_back(k);
		}
		cout<<solve(0, n-1)<<endl;
	}


	system("pause");
	return 0;
}*/