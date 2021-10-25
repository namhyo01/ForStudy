#include <iostream>
#include <algorithm>
#include <stdlib.h>
/*
using namespace std;
int N;
int A[101];
int add,mins,mul,divide;
int max_num = -1000000000;
int min_num = 1000000000;

void operation(int cnt, int add_count, int minus_count, int mul_count, int div_count,int num) {
	if (N == cnt) {//±âÀú»ç·Ê ³¡
		if (num > max_num)
			max_num = num;
		if (num < min_num)
			min_num = num;
		return;
	}
	
	if (add_count > 0) {
		//num+= A[cnt];
		operation(cnt + 1, add_count - 1, minus_count, mul_count, div_count, num+A[cnt]);
	}
	if (minus_count > 0) {
		//num -= A[cnt];
		operation(cnt + 1, add_count, minus_count-1, mul_count, div_count, num-A[cnt]);
	}
	if (mul_count> 0) {
		//num *= A[cnt];
		operation(cnt + 1, add_count, minus_count, mul_count-1, div_count, num*A[cnt]);
	}
	if (div_count > 0) {
		//num /= A[cnt];
		operation(cnt + 1, add_count, minus_count, mul_count, div_count-1, num/A[cnt]);
	}
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	cin >> add >> mins >> mul >> divide;
	operation(1, add, mins, mul, divide, A[0]);
	cout << max_num << endl;
	cout << min_num << endl;
	system("pause");
	return 0;
}*/