#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
#include <stack>
#include <queue>
using namespace std;

/*
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int N;
	int M;
	vector<int> namu;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		namu.push_back(temp);
	}


	unsigned int left = 0;
	unsigned int right = 1000000000;
	unsigned int result;
	while (left <= right) {
		unsigned int sum = 0;
		int mid = (left + right) / 2;
		for (int i = 0; i < N; i++) {
			if (mid < namu[i]) {
				sum += namu[i] - mid;
			}
			if (sum >= M)
				break;
		}
		if (sum >= M) {
			result = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}

	}
	cout << result << endl;
	system("pause");
	return 0;

}*/