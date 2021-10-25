#include <iostream>
#include <vector>
#include <algorithm>
/*
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	int max_blackjack = -1;
	vector<int> card;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int temp;
		cin >> temp;
		
		card.push_back(temp);
	}
	sort(card.begin(), card.end());
	for (auto i : card) {
		cout << i << endl;
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i+1; j < N - 1; j++) {
			for (int k = j+1; k < N; k++) {
				int sum = card[i] + card[j] + card[k];
				if (sum == M) {
					cout << M << endl;
					system("pause");
					return 0;
				}
				if (sum > max_blackjack && sum < M)
					max_blackjack = sum;
			}
		}
	}
	cout << max_blackjack<<endl;
	system("pause");
	return 0;
}*/