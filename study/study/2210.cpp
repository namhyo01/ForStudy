//#include<bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//char digit[6][6];
//
//int cnt;
//
//int dx[] = { 0,0,1,-1 };
//int dy[] = { 1,-1,0,0 };
//unordered_map<string, bool> uo;
//void dfs(int x,int y, string s, int count) {
//	if (count == 6) {
//		if (!uo[s])
//		{
//			uo[s] = true;
//			cnt++;
//		}
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		if (nextx < 0 || nexty < 0 || nextx >= 5 || nexty >= 5) continue;
//		dfs(nextx, nexty, s + digit[nextx][nexty], count + 1);
//		
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> digit[i][j];
//		}
//	 }
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			dfs(i, j, ""+digit[i][j], 0);
//		}
//	}
//	cout << cnt << endl;
//	system("pause");
//	return 0;
//}