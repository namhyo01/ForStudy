//#include <bits/stdc++.h>
//
//using namespace std;
//
//int N, H, W;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> H >> W;
//	string ans;
//	string temp[11];
//
//	for (int i = 0; i < H; i++) 
//		cin >> temp[i];
//	int j = 0;
//	for (int i = 0; i < N; i++) {
//		bool flag = false;
//		for (int h = 0; h < H; h++) {
//			for (int k = j; k < j+W; k++) {
//				if (temp[h][k] != '?'&&!flag) {
//					ans += temp[h][k];
//					flag = true;
//				}
//			}
//		}
//		if (!flag)
//			ans += "?";
//		j += W;
//	}
//
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}