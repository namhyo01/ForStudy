#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <string>
#include <vector>
/*
using namespace std;

bool comp(pair<string, int>a, pair<string, int>b) {
	return a.second > b.second;
}
bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first > b.first;
}
vector<int> solution(vector<string> genres, vector<int> plays) {
	vector<int> answer;
	
	unordered_map<string, int> hash_map;
	unordered_map<string, vector<pair<int, int>>> lists;
	for (int i = 0; i < genres.size(); i++) {
		hash_map[genres[i]] += plays[i];
		lists[genres[i]].push_back(make_pair(plays[i], i));
	}
	vector<pair<string, int>> vec(hash_map.begin(), hash_map.end());
	sort(vec.begin(), vec.end(), comp);
	for (auto it:vec)
	{
		sort(lists[it.first].begin(), lists[it.first].end(),cmp);
		if (lists[it.first].size() >= 2) {


			for (int i = 0; i < 2; i++)
				answer.push_back(lists[it.first][i].second);
				//cout << lists[it.first][i].second << endl;

		}
		else {
			answer.push_back(lists[it.first][0].second);
		}
	}
	return answer;
}


int main() {
	vector<string> genres = { "classic", "pop", "classic", "classic", "pop" };
	vector<int>plays = { 500, 600, 150, 800, 2500 };
	solution(genres, plays);
	system("pause");
	return 0;
}*/