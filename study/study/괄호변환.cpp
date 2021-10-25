#include <bits/stdc++.h>

using namespace std;

/*
stack<int> st;

int balance_check(string p) {
	int cnt = 0;
	string ans;
	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '(') {
			cnt++;
			ans += p[i];
		}
		else {
			cnt--;
			ans += p[i];
		}
		if (cnt == 0)
			return i;
	}
	return p.size()-1;
}

bool complete_check(string p) {
	for (int i = 0; i < p.size(); i++) {
		if (p[i] == '(')
			st.push(1);
		else {
			if (st.empty())
				return false;
			else
				st.pop();
		}
	}
	if (st.empty())
		return true;
	else
		return false;
}

string method(string p) {
	if (p.size() == 0)
		return "";
	int length = balance_check(p);
	string u, v;
	for (int i = 0; i <= length; i++) {
		u += p[i];
	}
	for (int i = length + 1; i < p.size(); i++) {
		v += p[i];
	}
	if (complete_check(u)) {// 3
		return u+method(v);
	}
	else {//4
		string temp;
		for (int i = 1; i < u.size() - 1; i++) {
			if (u[i] == '(')
				temp += ')';
			else
				temp += '(';
		}
		return "(" + method(v) + ")" + temp;
	}
}



string solution(string p) {
	string answer = "";
	if (complete_check(p)) // 바로 완벽
	{
		answer = p;
		return answer;
	}
	
	answer = method(p);

	return answer;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	string p;
	cin >> p;
	cout << solution(p)<<endl;
		

	system("pause");
	return 0;
}*/