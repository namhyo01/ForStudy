//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int N;
//	set<string> participate;
//	unordered_map<string, int> ans;
//	cin >> N;
//	for(int i=0;i<N;i++) {
//		string temp;
//		cin >> temp;
//		ans[temp]++;
//		participate.insert(temp);
//	}
//	for (int i = 0; i < N - 1; i++) {
//		string temp;
//		cin >> temp;
//		ans[temp]--;
//		if(ans[temp]==0)
//			participate.erase(temp);
//	}
//	for (set<string>::iterator it = participate.begin(); it != participate.end(); ++it) {
//		cout << *it << endl;
//	}
//	system("pause");
//	return 0;
//}