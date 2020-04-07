//���� Ʈ�� ������ ����
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#pragma warning(disable:4996)
using namespace std;

//���� ���� ���α׷�
#define MAX_SIZE 1000
char decompressed[MAX_SIZE][MAX_SIZE];
void decompress(string::iterator &it, int y, int x, int size) {
	//�ѱ��ھ� �˻��ҋ����� �ݺ��ڸ� �� ĭ ������ �ű��
	char head = *(it++);
	//������� ù���ڰ� b�� w�ϰ��
	if (head == 'b' || head == 'w') {
		for (int dy = 0; dy < size; dy++) {
			for (int dx = 0; dx < size; dx++) {
				decompressed[dy][dx] = head;
			}
		}
	}
	else {
		//�׺κ��� ����� ���� ������� ���������Ѵ�.
		int half = size / 2;
		decompress(it, y, x, half);
		decompress(it, y, x + half, half);
		decompress(it, y + half, x, half);
		decompress(it, y + half, x + half, half);
	}
}
