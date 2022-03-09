//#include <bits/stdc++.h>
//
//using namespace std;
//#define endl "\n"
//
//int N ,kim ,lim;
//int ans = 1;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N>>kim>>lim;
//	int temp = kim > lim ? lim : kim;
//	if (kim > lim)
//	{
//		lim = kim;
//		kim = temp;
//	}
//	while (1) {
//		if (kim % 2 != 1) {//È¦¼ö°¡¾Æ´Ï¶ó¸é ³ª´«´Ù
//			ans++;
//			if (lim % 2 == 1)
//				lim = lim / 2 + 1;
//			else
//				lim = lim / 2;
//			kim /= 2;
//			//lim /= 2;
//			continue;
//		}
//		else if (kim + 1 != lim) {
//			ans++;
//			if (lim % 2 == 1)
//				lim = lim / 2 + 1;
//			else
//				lim = lim / 2;
//			kim = kim / 2 + 1;
//			continue;
//		}
//		if (kim + 1 == lim) {
//			break;
//		}
//
//	}
//
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}