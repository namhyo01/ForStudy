//#include <bits/stdc++.h>
//#define endl "\n"
//using namespace std;
//
//int N, L;
//int arr[101][101];
//int arr1[101][101];
//int ans;
//
//bool make_road(int temp[][101],int x,int y) {
//	int num = temp[x][y + 1]; //����ĭ ����
//	for (int i = y + 1; i < y + 1 + L; i++)
//		if (temp[x][i] != num) return false;
//	return true;
//}
//
////case1 �������(���̰�)
////case2 
//void check(int temp[][101]) {
//	for (int i = 0; i < N; i++) {
//		bool flag = true;
//		int before_cnt = 1;
//		for (int j = 0; j < N - 1; j++) {
//			//case 1 �� ���� ����
//			if (temp[i][j] == temp[i][j + 1]) {
//				before_cnt++;
//			}
//			//case2 1ĭ ����
//			else if (temp[i][j] == temp[i][j + 1] + 1) {
//				if (make_road(temp, i, j)) {
//					j = j + L - 1;
//					before_cnt = 0;
//				}
//				else {
//					flag = false;
//					break;
//				}
//			}
//			else if (temp[i][j] + 1 == temp[i][j + 1]) { // ������ �� ����
//				if (before_cnt >= L) { //������ �°� L��ŭ ������
//					before_cnt = 1;
//				}
//				else {
//					flag = false;
//					break;
//				}
//			}
//			else if (abs(temp[i][j] - temp[i][j + 1]) >= 2) { // 2�̻�����
//				flag = false;
//				break;
//			}
//		}
//		if (flag)
//		{
//			ans++;
//		}
//	}
//}
//
//
//
//
//
//int main() {
//	ios::sync_with_stdio(0); cout.tie(0); cin.tie(0);
//	cin >> N >> L;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//			arr1[j][i] = arr[i][j];
//		}
//	}
//	check(arr);
//	check(arr1);
//	cout << ans << endl;
//
//	system("pause");
//	return 0;
//}