#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
int main() {
	int n;
	int sum = 0,max=0,cnt=0, many_count = 0;
	scanf("%d", &n);
	vector<int> num(n);
	set<int> mean; // 중복제거
	vector<int> num1(8001,0); //0으로 초기화

	set<int>::iterator iter;
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		sum += num[i];
		//mean.insert(num[i]);
		int temp = num[i] + 4000;
		num1[temp] += 1; // 카운팅 정렬
		if (max < num1[temp]) {
			max = num1[temp];
		}
	}
	for (int i = 0; i < 8001; i++) {
		if (num1[i] == max) {
			many_count = i - 4000;
			if (cnt == 1) {
				many_count = i - 4000;
				break;
			}
			cnt += 1;
		}
	}
	/*
	for (iter = mean.begin(); iter != mean.end(); iter++) {
		int current_cnt = count(num.begin(), num.end(), *iter);
		if (current_cnt == cnt) {
			temp.push_back(*iter);
		}
		else if (current_cnt > cnt) {
			cnt = current_cnt;
			temp.clear();
			temp.push_back(*iter);
		}

	}*//*
	sort(num.begin(), num.end());
	double avg = (double)sum / n;
	cout << round(avg) << endl;
	printf("%d \n", num[n / 2]); // 중앙값
	printf("%d\n", many_count);
	/*
	if (temp.size() > 1) {
		sort(temp.begin(), temp.end());
		printf("%d\n", temp[1]);
		//temp.erase(min(temp.begin(), temp.end()));
		//printf("%d\n", min(temp.begin(), temp.end()));
	}
	else {
		printf("%d\n",temp[0]);
	}*/
	//printf("\n\n%d\n\n ", num[0]);
	/*
	printf("%d\n", num[num.size() - 1]-num[0]); //범위값
	system("pause");

	return 0;*/
//}