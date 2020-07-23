#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

/*

int main() {
	vector<int> arr(90, 0);
	//int arr[80];
	//memset(arr, 0, sizeof(arr));
	int s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	for (int i = 1; i <= s1; i++)
		for (int j = 1; j <= s2; j++)
			for (int k = 1; k <= s3; k++)
				arr[i + j + k]++;
	int max = 0, res = 0;
	for (int i = 0; i < 90; i++) {
		if (arr[i] > max)
			max = arr[i], res = i;
	}
	printf("%d\n", res);

	system("pause");
	return 0;
}*///