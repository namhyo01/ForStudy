#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
#include <string>
#include<math.h>
#include <memory.h>
#include <stack>
/*
using namespace std;

stack<int> parenthesis;
bool check_paren(const char *ch) {
	if (*ch== '\0') {//���̸�
		if (parenthesis.empty()) {
			return true;
		}
		return false;
	}
	if (*ch == '(') {
		parenthesis.push(1);
		return check_paren(ch + 1);
	}
	else {
		if (!parenthesis.empty()) {//��������ʴٸ�
			parenthesis.pop();
			return check_paren(ch + 1);
		}
		else {
			return false;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin >> T;
	while (T--) {
		//stack����
		char paren[51];
		while (!parenthesis.empty()) parenthesis.pop();
		cin >> paren;
		if (check_paren(paren)) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}


	system("pause");
	return 0;
}*/