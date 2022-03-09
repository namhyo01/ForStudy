//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//int gcd(int a, int b) {
//	return b ?  gcd(b, a%b): a ;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int a1, a2, b1, b2;
//	cin >> a1 >> a2;
//	cin >> b1 >> b2;
//	int temp = gcd(a2, b2);
//	temp = (a2 / temp) * (b2 / temp) * temp;
//	a1 = a1 * (temp / a2);
//	b1 = b1*(temp / b2);
//	int ans = a1 + b1;
//	int tt = gcd(ans, temp);
//
//	cout << ans/tt<< " " << temp/tt << endl;
//
//	
//
//	system("pause");
//	return 0;
//}