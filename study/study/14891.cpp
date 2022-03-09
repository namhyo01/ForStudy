//#include <bits/stdc++.h>
//using namespace std;
//#define endl "\n"
//
//vector<char> one,two,three,four;
//int K;
//
//void rotateOne(int dir) { //1번이 움직임
//	char o = one[2];
//	char t1 = two[6];
//	char t2 = two[2];
//	char th1 = three[6];
//	char th2 = three[2];
//	char f = four[6];
//	if (dir == -1) {
//		rotate(one.begin(), one.begin() + 1, one.end());
//		dir = 1;
//	}
//	else {
//		rotate(one.begin(), one.end() - 1, one.end());
//		dir = -1;
//	}
//	if (o == t1) {//다르면 2는 시계 반대방향회전
//		return;
//	}
//	if (dir == -1) {
//		rotate(two.begin(), two.begin() + 1, two.end());
//		dir = 1;
//	}
//	else {
//		rotate(two.begin(), two.end() - 1, two.end());
//		dir = -1;
//	}
//	if (t2 == th1) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(three.begin(), three.begin() + 1, three.end());
//		dir = 1;
//	}
//	else {
//		rotate(three.begin(), three.end() - 1, three.end());
//		dir = -1;
//	}
//	if (th2 == f) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(four.begin(), four.begin() + 1, four.end());
//		dir = 1;
//	}
//	else {
//		rotate(four.begin(), four.end() - 1, four.end());
//		dir = -1;
//	}
//}
//void rotateTwo(int dir) { //2번이움직임
//	char o = one[2];
//	char t1 = two[6];
//	char t2 = two[2];
//	char th1 = three[6];
//	char th2 = three[2];
//	char f = four[6];
//	if (dir == -1) {
//		rotate(two.begin(), two.begin() + 1, two.end());
//		dir = 1;
//	}
//	else {
//		rotate(two.begin(), two.end() - 1, two.end());
//		dir = -1;
//	}
//	if (o != t1) {
//		if (dir == -1) {
//			rotate(one.begin(), one.begin() + 1, one.end());
//			//dir = 1;
//		}
//		else {
//			rotate(one.begin(), one.end() - 1, one.end());
//			//dir = -1;
//		}
//	}
//	if (t2 == th1) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(three.begin(), three.begin() + 1, three.end());
//		dir = 1;
//	}
//	else {
//		rotate(three.begin(), three.end() - 1, three.end());
//		dir = -1;
//	}
//	if (th2 == f) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(four.begin(), four.begin() + 1, four.end());
//		dir = 1;
//	}
//	else {
//		rotate(four.begin(), four.end() - 1, four.end());
//		dir = -1;
//	}
//}
//
//void rotateThree(int dir) {//3번이움직임
//	char o = one[2];
//	char t1 = two[6];
//	char t2 = two[2];
//	char th1 = three[6];
//	char th2 = three[2];
//	char f = four[6];
//
//	if (dir == -1) {
//		rotate(three.begin(), three.begin() + 1, three.end());
//		dir = 1;
//	}
//	else {
//		rotate(three.begin(), three.end() - 1, three.end());
//		dir = -1;
//	}
//	if (th2 != f) {
//		if (dir == -1) {
//			rotate(four.begin(), four.begin() + 1, four.end());
//			//dir = 1;
//		}
//		else {
//			rotate(four.begin(), four.end() - 1, four.end());
//			//dir = -1;
//		}
//	}
//	if (t2 == th1) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(two.begin(), two.begin() + 1, two.end());
//		dir = 1;
//	}
//	else {
//		rotate(two.begin(), two.end() - 1, two.end());
//		dir = -1;
//	}
//	if (t1 == o) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(one.begin(), one.begin() + 1, one.end());
//		dir = 1;
//	}
//	else {
//		rotate(one.begin(), one.end() - 1, one.end());
//		dir = -1;
//	}
//}
//void rotateFour(int dir) {//4번이움직임
//	char o = one[2];
//	char t1 = two[6];
//	char t2 = two[2];
//	char th1 = three[6];
//	char th2 = three[2];
//	char f = four[6];
//
//	if (dir == -1) {
//		rotate(four.begin(), four.begin() + 1, four.end());
//		dir = 1;
//	}
//	else {
//		rotate(four.begin(), four.end() - 1, four.end());
//		dir = -1;
//	}
//	if (f == th2) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(three.begin(), three.begin() + 1, three.end());
//		dir = 1;
//	}
//	else {
//		rotate(three.begin(), three.end() - 1, three.end());
//		dir = -1;
//	}
//	if (th1 == t2) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(two.begin(), two.begin() + 1, two.end());
//		dir = 1;
//	}
//	else {
//		rotate(two.begin(), two.end() - 1, two.end());
//		dir = -1;
//	}
//	if (t1 == o) {
//		return;
//	}
//	if (dir == -1) {
//		rotate(one.begin(), one.begin() + 1, one.end());
//		dir = 1;
//	}
//	else {
//		rotate(one.begin(), one.end() - 1, one.end());
//		dir = -1;
//	}
//}
//void checkRotate(int n, int dir) {
//	switch (n)
//	{
//	case 1:
//		rotateOne(dir);
//		break;
//	case 2:
//		rotateTwo(dir);
//		break;
//	case 3:
//		rotateThree(dir);
//		break;
//	case 4:
//		rotateFour(dir);
//		break;
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	for (int i = 0; i < 8; i++)
//	{
//		char ch;
//		cin >> ch;
//		one.push_back(ch);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		char ch;
//		cin >> ch;
//		two.push_back(ch);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		char ch;
//		cin >> ch;
//		three.push_back(ch);
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		char ch;
//		cin >> ch;
//		four.push_back(ch);
//	}
//	cin >> K;
//	while (K--) {
//		int n, dir;
//		cin >> n >> dir;
//		checkRotate(n, dir);
//	}
//	int ans = 0;
//	ans += one[0] == '1' ? 1 : 0;
//	ans += two[0] == '1' ? 2 : 0;
//	ans += three[0] == '1' ? 4 : 0;
//	ans += four[0] == '1' ? 8 : 0;
//	cout << ans << endl;
//	system("pause");
//	return 0;
//}
