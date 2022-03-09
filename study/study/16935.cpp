//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//int N, M, R;
//
//int map1[101][101];
//int map2[101][101];
//int just_do[1001];
//
//void just_do_1() {
//	for (int i = 0; i < N/2; i++) {
//		for (int j = 0; j < M; j++) {
//			int temp = map1[i][j];
//			map1[i][j] = map1[N - i - 1][j];
//			map1[N - i - 1][j] =temp;
//		}
//	}
//}
//
//void just_do_2() {
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M/2; j++) {
//			int temp = map1[i][j];
//			map1[i][j] = map1[i][M-j-1];
//			map1[i][M-j-1] = temp;
//		}
//	}
//}
//
//void just_do_3() {
//	
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map2[j][N - i - 1] = map1[i][j];
//		}
//	}
//	int temp = N;
//	N = M;
//	M = temp;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map1[i][j] = map2[i][j];
//		}
//	}
//}
//
//void just_do_4() {
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map2[M-j-1][i] = map1[i][j];
//		}
//	}
//	int temp = N;
//	N = M;
//	M = temp;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map1[i][j] = map2[i][j];
//		}
//	}
//}
//
//void just_do_5() {
//	for (int i = 0; i < N / 2; i++) {
//		for (int j = 0; j < M / 2; j++) {
//			map2[i][j+M/2] = map1[i][j];
//		}
//	}//1->2
//	for (int i = 0; i < N/2; i++) {
//		for (int j = M/2; j < M; j++) {
//			map2[i + N / 2][j] = map1[i][j];
//		}
//	}//2->3
//	for (int i = N/2; i < N ; i++) {
//		for (int j = M/2; j < M; j++) {
//			map2[i][j - M / 2] = map1[i][j];
//		}
//	}//3->4
//	for (int i =N/2; i < N ; i++) {
//		for (int j = 0; j < M/2; j++) {
//			map2[i - N / 2][j] = map1[i][j];
//		}
//	}//4->1
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map1[i][j] = map2[i][j];
//		}
//	}
//}
//
//void just_do_6() {
//
//	for (int i = 0; i < N / 2; i++) {
//		for (int j = 0; j < M / 2; j++) {
//			map2[i+N/2][j] = map1[i][j];
//		}
//	}//1->4
//	for (int i = 0; i < N / 2; i++) {
//		for (int j = M / 2; j < M; j++) {
//			map2[i][j-M/2] = map1[i][j];
//		}
//	}//2->3
//	for (int i = N / 2; i < N; i++) {
//		for (int j = M / 2; j < M; j++) {
//			map2[i-N/2][j] = map1[i][j];
//		}
//	}//3->2
//	for (int i = N / 2; i < N; i++) {
//		for (int j = 0; j < M / 2; j++) {
//			map2[i][j+M/2] = map1[i][j];
//		}
//	}//4->3
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			map1[i][j] = map2[i][j];
//		}
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N >> M >> R;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//		{
//			cin >> map1[i][j];
//		}
//	}
//
//	for (int i = 0; i < R; i++) {
//		int temp;
//		cin >> temp;
//		if (temp == 1)
//			just_do_1();
//		else if (temp == 2)
//			just_do_2();
//		else if (temp == 3)
//			just_do_3();
//		else if (temp == 4)
//			just_do_4();
//		else if (temp == 5)
//			just_do_5();
//		else if (temp == 6)
//			just_do_6();
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++)
//		{
//			cout << map1[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	system("pause");
//	return 0;
//}