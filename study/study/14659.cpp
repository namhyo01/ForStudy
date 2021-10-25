#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
using namespace std;
/*

int main() {
	int N;
	int hanzos[30001];
	scanf_s("%d", &N);
	int max_count = 0;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", &hanzos[i]);
	}

	for (int i = 0; i < N;i++) {

		int count = 0;
		for (int j = i+1; j < N; j++) {
			
			if (hanzos[i] > hanzos[j]) {
				count++;
				if (j == N - 1) {
					max_count = max_count > count ? max_count : count;
					printf("%d\n", max_count);

					system("pause");
					return 0;
				}
			}
			else {
				i = j-1;
				max_count = max_count > count ? max_count : count;
				break;
			}
		}
	}
	printf("%d\n", max_count);

	system("pause");
	return 0;
}*/