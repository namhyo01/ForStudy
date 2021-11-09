//#include <bits/stdc++.h>
//
//using namespace std;
//
//#define endl "\n"
//
//int K;
//pair<int, int> coord[6];
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> K;
//	for (int i = 0; i < 6; i++)
//		cin >> coord[i].first >> coord[i].second;
//	int max_sum = 0;
//	int max_width = 0;
//	for (int i = 0; i < 6; i++)
//	{
//		if (max_sum < coord[i].second*coord[(i + 1) % 6].second) {
//			max_sum = coord[i].second*coord[(i + 1) % 6].second;
//			max_width = i;
//		}
//	}
//	max_sum -= coord[(max_width + 3) % 6].second * coord[(max_width + 4) % 6].second;
//	cout << max_sum*K << endl;
//	system("pause");
//	return 0;
//}