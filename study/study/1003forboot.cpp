#include<iostream>
#include <algorithm>

using namespace std;
/*
int N;
int A[1001];
int long_size[1001];
int short_size[1001];

//가운데를 기준으로 왼쪽과 오른쪽으로 나누어서 각각 비교

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < N; i++) {
		long_size[i] = 1;
		for (int j = 0; j < i; j++) {
			if (A[i] > A[j]) {
				long_size[i] = max(long_size[i], long_size[j] + 1);
			}
		}
	}
	for (int i = N-1; i >=0; i--) {
		short_size[i] = 1;
		for (int j = N-1; j > i; j--) {
			if (A[i] > A[j]) {
				short_size[i] = max(short_size[i], short_size[j] + 1);
			}
		}
	}
	int len_size = 0;
	for (int i = 0; i < N; i++) {
		len_size = max(len_size, long_size[i] + short_size[i]);
	}
	cout << len_size-1 << endl;
	system("pause");
	return 0;
}*/