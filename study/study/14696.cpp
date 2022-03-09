//#include <bits/stdc++.h>
//
//using namespace std;
//
//int check_win(int *a, int *b) {
//	if (a[3] > b[3])
//		return 1;
//	if (a[3] < b[3])
//		return 0;
//	if (a[2] > b[2])
//		return 1;
//	if (a[2] < b[2])
//		return 0;
//	if (a[1] > b[1])
//		return 1;
//	if (a[1] < b[1])
//		return 0;
//	if (a[0] > b[0])
//		return 1;
//	if (a[0] < b[0])
//		return 0;
//	return 2;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	cin >> N;
//	while (N--) {
//		int A[] = { 0,0,0,0 };
//		int B[] = { 0,0,0,0 };
//		int a_cnt,b_cnt;
//		cin >> a_cnt;
//		for (int i = 0; i < a_cnt; i++) {
//			int temp;
//			cin >> temp;
//			
//			A[temp-1]++;
//		}
//		cin >> b_cnt;
//		for (int i = 0; i < b_cnt; i++)
//		{
//			int temp;
//			cin >> temp;
//			B[temp-1]++;
//		}
//		if (check_win(A, B) == 1)
//			cout << "A" << endl;
//		else if (check_win(A, B) == 0)
//			cout << "B" << endl;
//		else cout << "D" << endl;
//
//
//	}
//
//
//	system("pause");
//	return 0;
//}