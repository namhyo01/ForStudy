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
int solution(const char *s) {
	int answer = 0;
	unordered_map<string, int> number; //해시 설정
	number["zero"] = 1;
	number["one"] = 2;
	number["two"] = 3;
	number["three"] = 4;
	number["four"] = 5;
	number["five"] = 6;
	number["six"] = 7;
	number["seven"] = 8;
	number["eight"] = 9;
	number["nine"] = 10;
	string temp;
	bool flag = false;
	string ans(s);
	string ans1;
	int cnt = 0;
	for (int i = 0; i < ans.size(); i++) {

		int num = ans[i] - '0';
		if (num >= 0 && num <= 9) {
			ans1.append(to_string(num));
		}
		else {
			flag = true;
		}
		if (flag) {
			temp += ans[i]; // char를 string에 합체
			if (number[temp] != 0) {//숫자 완성
				ans1.append(to_string(number[temp]-1));
				flag = false;
				temp.clear();
			}
		}
	}

	//answer = stoi(ans1);
	answer = atoi(ans1.c_str());
	return answer;

}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	char arr[20000];
	cin >> arr;
	cout<<	solution(arr)<<endl;
	system("pause");
	return 0;
}


#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
s = regex_replace(s, regex("zero"), "0");
s = regex_replace(s, regex("one"), "1");
s = regex_replace(s, regex("two"), "2");
s = regex_replace(s, regex("three"), "3");
s = regex_replace(s, regex("four"), "4");
s = regex_replace(s, regex("five"), "5");
s = regex_replace(s, regex("six"), "6");
s = regex_replace(s, regex("seven"), "7");
s = regex_replace(s, regex("eight"), "8");
s = regex_replace(s, regex("nine"), "9");
return stoi(s);
}*/