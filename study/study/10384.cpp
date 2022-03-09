//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int n;
//	cin >> n;
//	cin.ignore();
//
//	int cnt = 0;
//	while (n--) {
//		cnt++;
//		string a;
//		getline(cin, a);
//		long long pangram[26] = { 0, };
//		for (int i = 0; i < a.size(); i++) {
//			if (a[i] >= 'a'&&a[i] <= 'z') {
//				pangram[a[i] - 'a']++;
//			}
//			if (a[i] >= 'A'&&a[i] <= 'Z') {
//				pangram[a[i] - 'A']++;
//			}
//		}
//		//unordered_map<char, int> pangram;
//		//for (int i = 0; i < a.size(); i++) {
//		//	if (a[i] >= 'a'&&a[i] <= 'z') {
//		//		pangram[a[i]]++;
//		//	}
//		//	if (a[i] >= 'A' && a[i] <= 'Z')
//		//		pangram[a[i] + 32]++;
//		//}
//		long long min_count = LONG_MAX;
//		for (int i = 0; i < 26; i++) {
//			min_count = min(min_count, pangram[i]);
//		}
//		if (min_count == 0) {
//			cout << "Case " << cnt << ": Not a Pangram" << endl;
//		}
//		else if (min_count == 1) {
//			cout << "Case " << cnt << ": Pangram!" << endl;
//		}
//		else if (min_count == 2) {
//			cout << "Case " << cnt << ": Double pangram!!" << endl;
//		}
//		else {
//			cout << "Case " << cnt << ": Triple pangram!!!" << endl;
//		}
//
//	}
//		system("pause");
//	return 0;
//
//
//}