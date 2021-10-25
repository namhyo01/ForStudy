#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
/*
using namespace std;
int N;
vector<pair<int, int>> conference;
bool compare(const pair<int, int>&a, const pair<int, int>&b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		conference.push_back(make_pair(a, b));
	}
	sort(conference.begin(), conference.end(), compare);
	int time = 0;
	for (int i = 0;i<N; i++) {
		if (conference[i].first >= time) {
			count++;
			time = conference[i].second;
		}
	}
	cout << count << endl;
	system("pause");
	return 0;
}*/