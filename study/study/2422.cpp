//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//int N, M;
//vector<int> no[201];
//int ans;
//int check[4];
//void dfs(int start, int cnt) {
//	if (cnt == 3) {
//		//기저사실 확인 no체크
//		for (int i = 0; i < 3; i++)
//		{
//			for (auto num : no[check[i]]) {
//				if (i == 0) { // 이미 check[i]는 일치
//					if (num == check[1] || num == check[2]) return;
//				}
//				if (i==1)
//					if (num == check[0] || num == check[2]) return;
//				if(i==2)
//					if (num == check[1] || num == check[0]) return;
//			}
//		}
//		ans++;
//		return;
//	}
//	for (int i = start; i <= N; i++) {
//			check[cnt] = i;
//			dfs(i+1, cnt + 1);
//			//check[i] = false;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N>> M;
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		no[a].push_back(b);
//	}
//		
//	if (N < 3)
//		cout << 0 << endl;
//	else {
//		dfs(1, 0);
//		cout << ans << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}