#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <cmath>
#include <set>
#pragma warning(disable:4996)
using namespace std;
/*
char a[1002], b[1002];
int dp[1002][1002];

/*
LCS문제
표를 만들어서 한문자씩 비교하면서
자기 기준 왼쪽과 위에중 최대값을 넣는다
만약에 같은문자가 나왔을시 왼쪽대각선 위의 값에서 +1을 한다
default = 0

*/

/*
int main() {
	int ret = 0;
	scanf("%s %s", a + 1, b + 1);
	for (int i = 1; a[i]; i++) {
		for (int j = 1; b[j]; j++) {
			if (a[i] == b[j])
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
			ret = max(ret, dp[i][j]);
		}
	}
	printf("%d\n", ret);
	//system("pause");
	return 0;
}*/