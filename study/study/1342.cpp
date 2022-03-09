//#include <bits/stdc++.h>
//
//using namespace std;
//
//string S;
//bool check[11];
//char ans[11];
//set<string> joongbok;
//int ans_cnt = 0;
//
//void dfs(int cnt) {
//	if (cnt == S.size()) {
//			for (int i = 0; i < S.size() - 1; i++) {
//				if (ans[i] == ans[i + 1])
//				{
//					return;
//				}
//				
//		}
//		ans_cnt++;
//		return;
//	}
//	for (int i = 0; i < S.size(); i++) {
//		if (!check[i]) {
//			check[i] = true;
//			ans[cnt] = S[i];
//			dfs(cnt + 1);
//			check[i] = false;
//		}
//
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> S;
//	sort(S.begin(), S.end());
//	do {
//		ans_cnt++;
//		for (int i = 0; i < S.size() - 1; i++)
//		{
//			if (S[i] == S[i + 1]) {
//				ans_cnt--;
//				break;
//			}
//		}
//		//cout<<S<<endl;
//	} while (next_permutation(S.begin(), S.end()));
//	cout << ans_cnt << endl;
//	system("pause");
//	return 0;
//}