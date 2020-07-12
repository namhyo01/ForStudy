/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
#include <string.h>
#include<algorithm>
using namespace std;

int cache[501], S[501];
int n;

int lis(int start) {
	int &ret = cache[start + 1];
	if (ret != -1) return ret;
	ret = 1;
	for (int next = start + 1; next<n; next++) {
		if (start == -1 || S[start] < S[next]) {
			ret = max(ret, lis(next) + 1);
		}
	}
	return ret;
}

/*int main()
{
	int C;
	cin >> C;
	for (int i = 0; i<C; i++) {
		cin >> n;
		memset(cache, -1, sizeof(cache));
		for (int j = 0; j<n; j++) {
			cin >> S[j];
		}

		cout << lis(-1) - 1 << endl;
	}

	return 0;
}


*/