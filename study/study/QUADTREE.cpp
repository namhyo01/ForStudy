//쿼드 트리 뒤집기 문제
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

//압축 해제 프로그램
#define MAX_SIZE 1000
char decompressed[MAX_SIZE][MAX_SIZE];
void decompress(string::iterator &it, int y, int x, int size) {
	//한글자씩 검사할떄마다 반복자를 한 칸 앞으로 옮긴다
	char head = *(it++);
	//기저사례 첫글자가 b나 w일경우
	if (head == 'b' || head == 'w') {
		for (int dy = 0; dy < size; dy++) {
			for (int dx = 0; dx < size; dx++) {
				decompressed[dy][dx] = head;
			}
		}
	}
	else {
		//네부분을 나누어서 각각 순서대로 압축해제한다.
		int half = size / 2;
		decompress(it, y, x, half);
		decompress(it, y, x + half, half);
		decompress(it, y + half, x, half);
		decompress(it, y + half, x + half, half);
	}
}
