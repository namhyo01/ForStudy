#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
#include <queue>
#include <functional>
using namespace std;
/*
	가운데는 MAX_HEAP 과 MIN_EHAP으로 구하자
*/
/*
int N;
int A[100001];
/*
void Solve() {
	priority_queue<int> MAX_HEAP;
	priority_queue<int, vector<int>, greater<int>> MIN_HEAP;
	for (int i = 0; i < N; i++) {
		if (MAX_HEAP.size() == MIN_HEAP.size()) MAX_HEAP.push(A[i]);
		else MIN_HEAP.push(A[i]);

		if (!MAX_HEAP.empty() && !MIN_HEAP.empty()) {
			if (MAX_HEAP.top() > MIN_HEAP.top()) {
				int a = MAX_HEAP.top();
				int b = MIN_HEAP.top();
				MAX_HEAP.pop();
				MIN_HEAP.pop();
				MAX_HEAP.push(b);
				MIN_HEAP.push(a);


			}
			
		}
		cout << MAX_HEAP.top() << endl;
	}

}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	Solve();

	system("pause");
	return 0;
}*/