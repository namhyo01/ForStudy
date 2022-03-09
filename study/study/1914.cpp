//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//void hanoi(int n, int from, int by, int to) { //시작, 경유, 도착
//	if (n == 1) cout << from << " " << to << endl;
//	else {
//		hanoi(n - 1, from, to, by); //1>3>2
//		cout << from << " " << to << endl;
//		hanoi(n - 1, by, from, to); //->2->1->3
//	}
//}
//
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int N;
//	cin >> N;
//	if (N > 20) {
//		cout << pow(2, N) - 1 << endl;
//	}
//	else {
//		cout << pow(2, N) - 1 << endl;
//		hanoi(N, 1, 2, 3);
//	}
//	
//	system("pause");
//	return 0;
//}