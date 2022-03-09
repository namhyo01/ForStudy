//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//int N, K, Q, M;
//bool sleepy[5005];
//int get_num[5005];
//int start, endss;
//bool check[5005];
//int sum_arr[5005];
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> K >> Q >> M;
//	for (int i = 0; i < K; i++) {
//		int temp;
//		cin >> temp;
//		sleepy[temp] = true;
//	}
//		
//	for (int i = 0; i < Q; i++) {
//		cin >> get_num[i];
//		if (!sleepy[get_num[i]]) {
//			for (int j = 1; j <= 17001; j++) {
//				int num = get_num[i] * j;
//				if (num > 5002)
//					break;
//				if (!sleepy[num])
//					check[num] = true;
//			}		
//		}
//
//	}
//
//	for (int i = 3; i <= N + 2; i++) {
//		if (check[i])
//			sum_arr[i] = sum_arr[i - 1];
//		else
//			sum_arr[i] = sum_arr[i - 1]+1;
//	}
//
//	for (int i = 0; i < M; i++) {
//		cin >> start >> endss;
//		//int range = endss - start + 1;
//		if (!check[start]) {
//			cout << sum_arr[endss] - sum_arr[start] + 1 << endl;
//		}
//		else {
//			cout << sum_arr[endss] - sum_arr[start] << endl;
//		}
//	}
//
//
//	system("pause");
//	return 0;
//}