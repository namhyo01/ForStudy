/*
#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#include<string>
#pragma warning(disable:4996)
using namespace std;

bool compare(const pair<int, string> &a, const pair<int, string> &b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	set<string> words;
	for (int i = 0; i < N; i++) {
		string temp;
		cin >> temp;
		words.insert(temp);
	}
	vector<pair<int, string>> new_word;
	int count = 0;
	for (set<string>::iterator itr = words.begin(); itr != words.end(); itr++) {
		string temp = (string)*itr;
		new_word.push_back(make_pair(temp.length(), temp));
		count++;
	}
	sort(new_word.begin(), new_word.end(), compare);
	for (int i = 0; i < new_word.size();i++) {
		cout << new_word[i].second << endl;
	}


	system("pause");
	return 0;

}*/