#include <iostream>
#include <algorithm>
#include <climits>
#include <functional>
#include <vector>
#include <string>
#include <string.h>
#include<math.h>
#include <stdio.h>
#include <memory.h>
#include <stack>
#include <queue>
#include <unordered_map>
#include <deque>
#include <set>
#include <sstream>
using namespace std;

/*
vector<int> numbers;
string hand;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int cnt = 11;
	while (cnt--) {
		int temp;
		cin >> temp;
		numbers.push_back(temp);
	}
	cin >> hand;
	int num = 0; string answer = "";
	queue < pair<int, int> >L; // x,y, count
	queue < pair<int, int> >R; //x,y,count
	L.push(make_pair(3, 0));
	R.push(make_pair(3, 2));
	cnt = numbers.size();
	while (cnt--) {
		//cout << "asd" << endl;
		int number = numbers[num];
		if (number == 1 || number == 4 || number == 7)
		{
			L.pop();
			if(number == 1) L.push(make_pair(0, 0));
			if (number == 4) L.push(make_pair(1, 0));
			if (number == 7) L.push(make_pair(2, 0));
			answer.append("L");
		}
		else if (number == 3 || number == 6 || number == 9) {
			R.pop();
			if (number == 3) R.push(make_pair(0, 2));
			if (number == 6) R.push(make_pair(1, 2));
			if (number == 9) R.push(make_pair(2, 2));
			answer.append("R");
		}
		else {
			if (number == 2) {//0,1
				int L_dis = L.front().first + abs(L.front().second - 1);
				int R_dis = R.front().first + abs(R.front().second - 1);
				if (L_dis == R_dis) {
					if (!hand.compare("left")) {
						L.pop();
						L.push(make_pair(0, 1));
						answer.append("L");
					}
					else {
						R.pop();
						R.push(make_pair(0, 1));
						answer.append("R");
					}

				}
				else if (L_dis < R_dis) {
					L.pop();
					L.push(make_pair(0, 1));
					answer.append("L");
				}
				else {
					R.pop();
					R.push(make_pair(0, 1));
					answer.append("R");
				}
			}
			else if (number == 5) {//1,1
				int L_dis = abs(L.front().first-1) + abs(L.front().second - 1);
				int R_dis = abs(R.front().first-1) + abs(R.front().second - 1);
				if (L_dis == R_dis) {
					if (!hand.compare("left")) {
						L.pop();
						L.push(make_pair(1, 1));
						answer.append("L");
					}
					else {
						R.pop();
						R.push(make_pair(1, 1));
						answer.append("R");
					}

				}
				else if (L_dis < R_dis) {
					L.pop();
					L.push(make_pair(1, 1));
					answer.append("L");
				}
				else {
					R.pop();
					R.push(make_pair(1, 1));
					answer.append("R");
				}
			}
			else if (number == 8) {//2,1
				int L_dis = abs(L.front().first-2) + abs(L.front().second - 1);
				int R_dis = abs(R.front().first-2) + abs(R.front().second - 1);
				if (L_dis == R_dis) {
					if (!hand.compare("left")) {
						L.pop();
						L.push(make_pair(2, 1));
						answer.append("L");
					}
					else {
						R.pop();
						R.push(make_pair(2, 1));
						answer.append("R");
					}

				}
				else if (L_dis < R_dis) {
					L.pop();
					L.push(make_pair(2, 1));
					answer.append("L");
				}
				else {
					R.pop();
					R.push(make_pair(2, 1));
					answer.append("R");
				}
			}
			else {//3,1
				int L_dis = abs(L.front().first-3) + abs(L.front().second - 1);
				int R_dis = abs(R.front().first-3) + abs(R.front().second - 1);
				if (L_dis == R_dis) {
					if (!hand.compare("left")) {
						L.pop();
						L.push(make_pair(3, 1));
						answer.append("L");
					}
					else {
						R.pop();
						R.push(make_pair(3, 1));
						answer.append("R");
					}

				}
				else if (L_dis < R_dis) {
					L.pop();
					L.push(make_pair(3, 1));
					answer.append("L");
				}
				else {
					R.pop();
					R.push(make_pair(3, 1));
					answer.append("R");
				}
			}
		}

		num++;
	}
	cout << answer << endl;

	system("pause");
	return 0;
}*/