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
#include <set>
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
		int k;
		cin >> k;
		multiset<int> s;
		while (k--) {
			char ch;
			int num;
			cin >> ch >> num;
			if (ch == 'I') {
				s.insert(num);
			}
			else {
				if (!s.empty()) {
					if (num == 1) {
						auto kk = s.end();
						kk--;
						s.erase(kk);
					}
					else {
						s.erase(s.begin());
					}
				}
			}
		}
		if (s.empty())
			cout << "EMPTY" << "\n";
		else {
			auto kk = s.end();
			kk--;
			cout << *kk << *s.begin() << "\n";
		}

	}

	system("pause");
	return 0;
}*/