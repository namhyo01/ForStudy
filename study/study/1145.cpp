//#include <bits/stdc++.h>
//
//using namespace std;
//
//int min_ans = INT_MAX;
//
//void check(int a, int b, int c) {
//	for (int i = 4; i <= 1000000; i++) {
//		if (min_ans <= i)
//			return;
//		if (i%a == 0 && i%b == 0 && i%c == 0)
//		{
//			
//			min_ans = i;
//		}
//	}
//
//}
//
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//	int num[5];
//	for (int i = 0; i < 5; i++)
//		cin >> num[i];
//	for (int i = 0; i < 3; i++) {
//		for (int j = i + 1; j < 4; j++) {
//			for (int k = j + 1; k < 5; k++) {
//				check(num[i], num[j], num[k]);
//			}
//		}
//	}
//	cout << min_ans << endl;
//	system("pause");
//	return 0;
//
//}