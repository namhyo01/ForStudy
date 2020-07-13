#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;
// ��������
vector<int> h;
// �������λ����
// ���������� �����
// �� �߰��� �ִ� �͵� ���
int solve(int left, int right) {
	//���ڰ� �ϳ��ΰ��
	if (left == right)
		return h[left];
	int mid = (left + right) / 2; // ��� �κ�
	int ret = max(solve(left, mid), solve(mid + 1, right));
	int lo = mid, hr = mid + 1;// �߰� �κ� ���
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