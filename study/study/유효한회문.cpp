#include <bits/stdc++.h>

using namespace std;
/*
#define endl "\n"

bool check = true;
bool checkpalin(char* ch,int i,int j){
	while (1) {
		if (i == j || i > j)
			break;
		if (ch[i] == ch[j]) {
			i++; j--;
		}
		else {
			if (check) {
				check = false;
				bool ans = checkpalin(ch, i + 1, j) || checkpalin(ch, i, j - 1);
				if (ans) {
					cout << 1 << endl;
				}
				else {
					cout << 2 << endl;
				}
				return true;
			}
			else {
				return false;
			}
		}
	}
	if (check) {
		cout << 0 << endl;
	}
	return true;

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while (T--) {
		check = true;
		int i, j;
		char ch[100001];
		cin >> ch;
		i = 0; j = strlen(ch) - 1;
		checkpalin(ch, i, j);
	}


	system("pause");
	return 0;
}*/