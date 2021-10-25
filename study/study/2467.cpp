#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
using namespace std;
/*
int N;
vector<int> liquid;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int temp; 
		cin >> temp;
		liquid.push_back(temp);
	}
	int to = liquid[0];
	int des = liquid[N - 1];
	int sum_min = INT_MAX;
	int front = 0,end = N-1;
	int ans1, ans2;
	while (to != des) {
		int sum = to + des;

		if (abs(sum_min) > abs(sum)) {
			sum_min = sum;
			ans1 = to, ans2 = des;

		}
		if (sum == 0)
			break;
		if (sum > 0) {
			end--;
			des = liquid[end];
		}
		else {
			front++;
			to = liquid[front];
		}
			
	}
	cout << ans1 << " " << ans2<< endl;
	system("pause");
	return 0;
}*/