//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//unordered_map<char,bool> uo;
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	string s;
//	cin >> s;
//	for (int i = 0; i < s.size();i++) {
//		uo[s.at(i)] = true;
//	}
//	for (char i = 'a'; i <= 'z'; i++) {
//		if (!uo[i]) {
//			cout << s + i << endl;
//			system("pause");
//			return 0;
//		}
//	}
//	//여기부턴 a~z다쓰인 case
//	bool flag = false;
//	int ff = 0;
//	char ch;
//	for (int i = s.size() - 1; i > 0; i--) {
//		uo[s.at(i)] = false;
//		if (s.at(i) > s.at(i - 1)) {
//			flag = true;
//			ff = i - 1;
//			break;
//		}
//	}
//	if(!flag)
//		cout << -1 << endl;
//	else {
//		for (int i = 0; i < ff; i++)
//			cout << s.at(i)<<"";
//		for (char i = 'a'; i <= 'z'; i++) {
//			if (!uo[i] && i>s.at(ff)) {
//				cout << i << endl;
//				break;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}