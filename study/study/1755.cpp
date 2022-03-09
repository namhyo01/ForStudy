//#include <bits/stdc++.h>
//
//using namespace std;
//
//int M,N;
//vector<pair<string, int> > alphabet;
//string alpha[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	cin >> M >> N;
//
//
//	for (int i = M; i <= N; i++) {
//		if (i < 10) {
//			alphabet.push_back(make_pair(alpha[i], i));
//		}
//		else {
//			int jari1 = i / 10;
//			int jari2 = i % 10;
//
//			string temp = alpha[jari1];
//			temp += alpha[jari2];
//			
//			alphabet.push_back(make_pair(temp, i));
//		}
//	}
//	sort(alphabet.begin(), alphabet.end());
//	for (int i = 0; i < alphabet.size(); i++) {
//		if (i % 10 == 0 && i != 0)
//			cout << "\n";
//		cout << alphabet[i].second << " ";
//	}
//	cout << "\n";
//	system("pause");
//	return 0;
//}
