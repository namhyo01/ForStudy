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
	int n, m,important;//문서개수, 몇번째에있는지 궁금한 m, 중요도
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		count = 0;
		scanf("%d %d", &n, &m);

		queue<pair<int, int>> que;
		priority_queue<int> pq;
		for (int j = 0; j < n; j++) {
			scanf("%d", &important);
			que.push({ j,important }); // 큐에 순서랑 , 가중치를 저장
			pq.push(important); // 우선순위 큐에 가중치 저장 지금은 max heap을 사용해서 큰값부터 저장
		}
		while (!que.empty()) {
			
			int idx = que.front().first; // 순서
			int imp = que.front().second; //가중치
			que.pop(); //q에서 데이터를 뽑아낸다.
			if (imp == pq.top()) { // 우선순위 큐와 제일 탑에 있는거랑 맞는게있냐?
				pq.pop();//맞으면 우선순위큐를 비워주고
				count++; // 횟수를 세준다
				if (idx == m) { //거기서 내가 찾을려는 순서랑 동일하다면
					printf("%d\n", count);
					break;
				}

			}
			else { //만약 우선순위큐의 제일 높은 가중치와 큐의 순서가 안맞으면 다시 뒤로 넣는다
				que.push({ idx,imp });
			}
		}

		

	}

	return 0;
}
*/