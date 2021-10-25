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
using namespace std;
/*

int main() {
	ios::sync_with_stdio(0);
	cout.tie(0);
	cin.tie(0);
	while (1) {
		string line;
		bool right = true;
		stack<int> lparen;
		getline(cin, line);
		if (line[0] == '.'&&line.size() == 1)
			break;
		for (int i = 0; i < line.size(); i++) {

			if (line[i] == '(') {
				lparen.push(1);
			}
			else if (line[i] == '[') {
				lparen.push(2);
			}
			else if (line[i] == ')') {

				if (lparen.size()>0 && lparen.top() == 1) {
					lparen.pop();
				}
				else {
					right = false;
					break;
				}
			}
			else if (line[i] == ']') {
				if (lparen.size()>0 && lparen.top() == 2) {
					lparen.pop();
				}
				else {
					right = false;
					break;
				}
			}
		}
		if (right&&lparen.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}


	}


	system("pause");
	return 0;
}*/