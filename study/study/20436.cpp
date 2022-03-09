//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//
//	char s1, s2;
//	cin >> s1 >> s2;
//	string s;
//	cin >> s;
//	unordered_map<char, pair<int, int> > pq;
//	pq['a'] = make_pair(0, 1);
//	pq['b'] = make_pair(4, 0);
//	pq['c'] = make_pair(2, 0);
//	pq['d'] = make_pair(2, 1);
//	pq['e'] = make_pair(2, 2);
//	pq['f'] = make_pair(3, 1);
//	pq['g'] = make_pair(4, 1);
//	pq['h'] = make_pair(5, 1);
//	pq['i'] = make_pair(7, 2);
//	pq['j'] = make_pair(6, 1);
//	pq['k'] = make_pair(7, 1);
//	pq['l'] = make_pair(8, 1);
//	pq['m'] = make_pair(6, 0);
//	pq['n'] = make_pair(5, 0);
//	pq['o'] = make_pair(8, 2);
//	pq['p'] = make_pair(9, 2);
//	pq['q'] = make_pair(0, 2);
//	pq['r'] = make_pair(3, 2);
//	pq['s'] = make_pair(1, 1);
//	pq['t'] = make_pair(4, 2);
//	pq['u'] = make_pair(6, 2);
//	pq['v'] = make_pair(3, 0);
//	pq['w'] = make_pair(1, 2);
//	pq['x'] = make_pair(1, 0);
//	pq['y'] = make_pair(5, 2);
//	pq['z'] = make_pair(0, 0);
//
//	int ans = 0;
//	for (int i = 0; i < s.size(); i++) {
//		int x1, y1,x2,y2;
//		if (s[i] == 'y' || s[i] == 'h' || s[i] == 'b' || s[i] == 'n' || s[i] == 'm' || s[i] == 'j' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o' || s[i] == 'p' || s[i] == 'l' || s[i] == 'k') {
//			x1 = pq[s[i]].first;
//			y1 = pq[s[i]].second;
//			x2 = pq[s2].first;
//			y2 = pq[s2].second;
//			ans += abs(x1 - x2) + abs(y1 - y2)+1;
//			s2 = s[i];
//		}
//		else {
//			x1 = pq[s[i]].first;
//			y1 = pq[s[i]].second;
//			x2 = pq[s1].first;
//			y2 = pq[s1].second;
//			ans += abs(x1 - x2) + abs(y1 - y2)+1;
//			s1 = s[i];
//		}
//	}
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}