#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
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
#include <sstream>
using namespace std;
/*
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		string p;
		cin >> p;
		int n;
		cin >> n;
		deque<string> x;
		string pp;
		cin >> pp;
		pp.erase(0,1);
		pp.erase(pp.find(']'));
		istringstream ss(pp);
		string stringBuffer;
		while (getline(ss, stringBuffer, ',')) {//split
			x.push_back(stringBuffer);
		}
		bool left = true;
		bool right = false;
		bool doit = true;
		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'R') {
				if (left) {
					left = false;
					right = true;
				}
				else {
					left = true;
					right = false;
				}
			}
			else {
				if (left) {
					if(!x.empty())
						x.pop_front();
					else {
						doit = false;
						break;
					}

				}
				else {
					if (!x.empty())
						x.pop_back();
					else {
						doit = false;
						break;
					}
				}
			}
		}
		
		if (doit) {
			cout << '[';
			int cnt = 0;
			int size = x.size();
			while (!x.empty()) {
				if (cnt == size-1) {
					if (left)
					{
						cout << x.front();
						x.pop_front();
					}
					else {
						cout << x.back();
						x.pop_back();
					}
				}
				else {
					if (left)
					{
						cout << x.front() << ",";
						x.pop_front();
					}
					else {
						cout << x.back() << ",";
						x.pop_back();
					}
					cnt++;
				}
			}
			cout << ']';
		}
		else {
			cout << "error";
		}
		cout << endl;
	}


	system("pause");
	return 0;

}*/