//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//
//string mm[7];
//string num = "";
//string ans[7] = { "", };
//string one[7] = { "000000","000100","001100","000100","000100","000100","000000" };
//string zero[7] = { "000000","001100","010010","010010" ,"010010","001100","000000" };
//string two[7] = { "000000","011110","000010","011110","010000","011110","000000" };
//string three[7] = { "000000","011100","000010","000100","000010","011100","000000" };
//string four[7] = { "000000","000100","001100","010100","111110","000100","000000" };
//string five[7] = { "000000","011110","010000","011100","000010","010010","001100" };
//string six[7] = { "000000","010000","010000" ,"011110","010010","011110","000000" };
//string seven[7] = { "000000","011110","000010","000100","000100" ,"000100" ,"000000" };
//string eight[7] = { "000000","011110","010010","011110","010010","011110","000000" };
//string nine[7] = { "011110","010010","010010" ,"011110","000010","000010" ,"000010" };
//
//bool alright(string a[7], string b[7]) {
//	if (a[0] == b[0] && a[1] == b[1] && a[2] == b[2] && a[3] == b[3] && a[4] == b[4] && a[5] == b[5] && a[6] == b[6])
//		return true;
//	return false;
//}
//
//void solve(string a[7]) {
//	for (int i = 0; i < 7; i++) {
//		ans[i] += a[i];
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 0; i < 7; i++)
//		cin >> mm[i];
//	int cnt = mm[0].size() / 6;
//	
//
//	for (int i = 0; i < mm[0].size(); i += 6) {
//		string temp[7] = { "", };
//		for (int k = 0; k < 7; k++) {
//			for (int j = i; j < i + 6; j++) {
//				temp[k] += mm[k].at(j);
//			}
//		}
//		if (alright(one,temp))
//			num += '1';
//		else if (alright(two, temp))
//			num += '2';
//		else if (alright(three, temp))
//			num += '3';
//		else if (alright(four, temp))
//			num += '4';
//		else if (alright(five, temp))
//			num += '5';
//		else if (alright(six, temp))
//			num += '6';
//		else if (alright(seven, temp))
//			num += '7';
//		else if (alright(eight, temp))
//			num += '8';
//		else if (alright(nine, temp))
//			num += '9';
//		else num += '0';
//	}
//	string check_last = num;
//	if (next_permutation(num.begin(), num.end())) {
//		for (int i = 0; i < num.size(); i++) {
//			if (num[i] == '0') solve(zero);
//			else if (num[i] == '1') solve(one);
//			else if (num[i] == '2') solve(two);
//			else if (num[i] == '3') solve(three);
//			else if (num[i] == '4') solve(four);
//			else if (num[i] == '5') solve(five);
//			else if (num[i] == '6') solve(six);
//			else if (num[i] == '7') solve(seven);
//			else if (num[i] == '8') solve(eight);
//			else solve(nine);
//		}
//		for (int i = 0; i < 7; i++)
//			cout << ans[i] << endl;
//	}
//	else {
//		cout << "The End" << endl;
//	}
//		
//		
//	
//	system("pause");
//	return 0;
//}