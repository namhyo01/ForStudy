//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int n, m;
//int arr[1001][1001];
//int dp[1001][1001];
//int ans;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			char ch;
//			cin >> ch;
//			arr[i][j] = ch-'0';
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= m; j++) {
//			//1 점에서 왼쪽, 위, 대각선위를 비교해주자(오른쪽 끝점기준으로 생각하자)
//			//거기에 다 1이면(min)이 그럼 모두다 1인것이다.
//			//정사각형 최대 한변길이
//			if (arr[i][j] == 1) {
//				arr[i][j] = min(arr[i-1][j-1],min(arr[i - 1][j], arr[i][j - 1]))+1;
//				//arr[i][j] = min(arr[i][j], arr[i - 1][j - 1]) + 1;
//				ans = ans > arr[i][j] ? ans : arr[i][j];
//			}
//		}
//	}
//	cout << ans*ans << endl;
//	system("pause");
//	return 0;
//}
