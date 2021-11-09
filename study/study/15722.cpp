//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int n;
//	cin >> n;
//	int x = 0, y = 0;
//	int go = 1;
//	int direction = 1;
//	while (1) {
//		if (n == 0)
//			break;
//		int temp = go;
//		while (temp--) {
//			n--;
//			y += direction;
//			if (n == 0)
//				break;
//		}
//		if (n == 0)
//			break;
//		temp = go;
//		while (temp--)
//		{
//			n--;
//			x += direction;
//			if (n == 0)
//				break;
//		}
//		if (n == 0)
//			break;
//		go++;
//		direction *= -1;
//	}
//	cout << x << " " << y << endl;
//	system("pause");
//	return 0;
//}