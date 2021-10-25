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
	int N;
	cin >> N;
	deque<int> dq;
	
	while (N--) {
		string command;
		cin >> command;
		if (command.compare("push_back") == 0) {
			int temp;
			cin >> temp;
			dq.push_back(temp);
		}
		else if (command.compare("push_front") == 0) {
			int temp;
			cin >> temp;
			dq.push_front(temp);
		}
		else if (command.compare("front") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
			}
		}
		else if (command.compare("back") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.back() << endl;
			}
		}
		else if (command.compare("size") == 0) {
			cout << dq.size() << endl;
		}
		else if (command.compare("empty") == 0) {
			if (dq.empty())
				cout << 1 << endl;
			else
				cout << 0 << endl;

		}
		else if (command.compare("pop_front") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (command.compare("pop_back") == 0) {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
	}
	
	system("pause");
	return 0;
}*/