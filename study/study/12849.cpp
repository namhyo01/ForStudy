//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//int dp[8] = { 1,0,0,0,0,0,0,0 };
//int D;
//
////�������а� 0
////����� 1
////�̷��� 2
////�ž�� 3
////ȯ�������� 4
////������ 5
////�л�ȸ�� 6
////�������а� 7
//
//
//void move() {
//	int temp[8];
//	temp[0] = (dp[1] + dp[2])% 1000000007;
//	temp[1] = (dp[0] + dp[2] + dp[3])% 1000000007;
//	temp[2] = (dp[0]+dp[1]+dp[3]+dp[4])% 1000000007;
//	temp[3] = (dp[1]+dp[2]+dp[5]+dp[4])% 1000000007;
//	temp[4] = (dp[2]+dp[3]+dp[5]+dp[7])% 1000000007;
//	temp[5] = (dp[3]+dp[6]+dp[4])% 1000000007;
//	temp[6] = (dp[5]+dp[7])% 1000000007;
//	temp[7] = (dp[6]+dp[4])% 1000000007;
//	for (int i = 0; i < 8; i++)
//		dp[i] = temp[i];
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> D;
//	for (int i = 0; i < D; i++)
//		move();
//	cout << dp[0]<<endl;
//	system("pause");
//	return 0;
//}
