#include <iostream>
#include <algorithm>
#include <climits>
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
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, K;
	cin >> N >> K;
	queue<int> yosepus;
	for (int i = 1; i <= N; i++)
		yosepus.push(i);
	int count = 1;
	int count_num = 0;
	cout << "<";
	while (!yosepus.empty()) {
		if (count == K) { //K¶û Ä«¿îÆ®¶û °°´Ù¸é
			count_num++;
			if(count_num==N)
				cout << yosepus.front();
			else
				cout << yosepus.front()<<", ";
			yosepus.pop();
			count = 1;
		}
		else {
			count++;
			int temp = yosepus.front();
			yosepus.pop();
			yosepus.push(temp);
		}
	}
	cout << ">"<<endl;
	system("pause");
	return 0;
}*/