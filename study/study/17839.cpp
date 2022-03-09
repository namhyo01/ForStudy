//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//int N;
//unordered_map<string, int> check;
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> N;
//	
//	unordered_map<string, vector<string>> pq;
//	//vector<pair<string, vector<string> > >pq(100001);
//	for (int i = 0; i < N; i++) {
//		string a, b, c;
//		cin >> a >> b >> c;
//		pq[a].push_back(c);
//	}
//
//	queue<string> q;
//
//	q.push("Baba");
//	vector<string> ans;
//
//	while (!q.empty()) {
//		string name = q.front();
//		q.pop();
//		
//		for (int i = 0; i < pq[name].size(); i++) {
//			if (check[pq[name][i]] != 0) continue;
//				check[pq[name][i]] += 1;
//				ans.push_back(pq[name][i]);
//				q.push(pq[name][i]);
//
//			
//		}
//	}
//	sort(ans.begin(), ans.end());
//	for (int i = 0; i < ans.size(); i++)
//		cout << ans[i] << endl;
//
//
//
//	system("pause");
//	return 0;
//}