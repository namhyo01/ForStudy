//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	int width, height;
//	cin >> height >> width;
//	int cut;
//	cin >> cut;
//	set<int> h1;
//	set<int> w1;
//
//	for(int i=0;i<cut;i++) {
//		int a, b;
//		cin >> a >> b;
//		if (a == 0)
//			w1.insert(b);
//		else
//			h1.insert(b);
//	}
//	w1.insert(0);
//	h1.insert(0);
//	w1.insert(width);
//	h1.insert(height);
//	int max1 = 0;
//	int max2 = 0;
//	int before1 = 0, before2 = 0;
//	for (set<int>::iterator it = w1.begin(); it != w1.end(); it++) {
//		if (it == w1.begin())
//			continue;
//		max1 = max(max1, *it - before1);
//		before1 = *it;
//
//	}
//	for (set<int>::iterator it = h1.begin(); it != h1.end(); it++) {
//		if (it == h1.begin())
//			continue;
//		max2 = max(max2, *it - before2);
//		before2 = *it;
//		//cout << *it << endl;
//	}
//	cout << max1*max2<<endl;
//	system("pause");
//	return 0;
//}