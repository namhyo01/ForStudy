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
LCS����
ǥ�� ���� �ѹ��ھ� ���ϸ鼭
�ڱ� ���� ���ʰ� ������ �ִ밪�� �ִ´�
���࿡ �������ڰ� �������� ���ʴ밢�� ���� ������ +1�� �Ѵ�
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