/*
#include <iostream>
#include <algorithm>
#include <queue>
#include <stdlib.h>
#include <vector>
using namespace std;

int main()
{
	int T; // testcase
	int count = 0;
	int n, m,important;//��������, ���°���ִ��� �ñ��� m, �߿䵵
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		count = 0;
		scanf("%d %d", &n, &m);

		queue<pair<int, int>> que;
		priority_queue<int> pq;
		for (int j = 0; j < n; j++) {
			scanf("%d", &important);
			que.push({ j,important }); // ť�� ������ , ����ġ�� ����
			pq.push(important); // �켱���� ť�� ����ġ ���� ������ max heap�� ����ؼ� ū������ ����
		}
		while (!que.empty()) {
			
			int idx = que.front().first; // ����
			int imp = que.front().second; //����ġ
			que.pop(); //q���� �����͸� �̾Ƴ���.
			if (imp == pq.top()) { // �켱���� ť�� ���� ž�� �ִ°Ŷ� �´°��ֳ�?
				pq.pop();//������ �켱����ť�� ����ְ�
				count++; // Ƚ���� ���ش�
				if (idx == m) { //�ű⼭ ���� ã������ ������ �����ϴٸ�
					printf("%d\n", count);
					break;
				}

			}
			else { //���� �켱����ť�� ���� ���� ����ġ�� ť�� ������ �ȸ����� �ٽ� �ڷ� �ִ´�
				que.push({ idx,imp });
			}
		}

		

	}

	return 0;
}
*/