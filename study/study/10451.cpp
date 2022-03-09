//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//bool check[1003];
//vector<int> arr[1003];
//
//
//
//void dfs(int a) {
//	check[a] = true;
//	//cout << arr[a].size();
//	for (int i = 0; i < arr[a].size(); i++) {
//		int next = arr[a][i];
//		//cout << next << endl;
//		if (!check[next])
//			dfs(next);
//	}
//}
//
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int T;
//	cin >> T;
//	while (T--) {
//		
//		int N;
//		int ans = 0;
//		cin >> N;
//		for (int i = 1; i <= N; i++) {
//			arr[i].clear();
//			check[i] = false;
//			int temp;
//			cin >> temp;
//			arr[i].push_back(temp);
//		}
//		
//		for (int i = 1; i <= N; i++)
//		{
//			if (!check[i]) {
//				dfs(i);
//				ans++;
//			}
//		}
//		
//
//		cout << ans << endl;
//	}
//
//
//	system("pause");
//	return 0;
//}
