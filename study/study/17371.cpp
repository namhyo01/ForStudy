#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
/*
using namespace std;
/*
struct pt
{
	double x, y;
	double dt(pt &o)
	{
		return sqrt((x - o.x)*(x - o.x) + (y - o.y)*(y - o.y));
	}
};

pt pts[1010];
int main()
{
		int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		double x, y; cin >> x >> y;
		pts[i] = { x, y };
	}
	int best = -1;
	double score = 1e12;
	for (int i = 1; i <= n; i++)
	{
		double MD = 0;
		for (int j = 1; j <= n; j++)
			MD = max(MD, pts[i].dt(pts[j]));
		double sc = MD / 2;
		if (score >= sc)
		{
			score = sc;
			best = i;
		}
	}
	cout << pts[best].x << ' ' << pts[best].y << '\n';
	system("pause");
}*/

/*

struct point {
	double x, y;
	double distance(point & op) {
		return sqrt((x - op.x)*(x - op.x) + (y - op.y)*(y - op.y));
	}
	void print() {
		cout << x << ' ' << y << endl;
	}
};

int main() {
	point pts[1001];
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		double x, y;
		cin >> x >> y;
		pts[i] = { x,y };
	}
	int ans = -1;
	double dis = 999999999999999999;
	for (int i = 1; i <= N; i++) {
		double distance = 0;
		for (int j = 1; j <= N; j++) {
			distance = max(distance, pts[i].distance(pts[j])); // 최소점과 최대점 구했다.
		}
		//이제 거리를 구했으니 거리의 평균 즉 /2를 구하자
		if (dis >= (distance / 2)) { // 평균의 최소값을 구해야함
			dis = distance / 2;
			ans = i;//최소점
		}
	}
	pts[ans].print();
	system("pause");
	return 0;
}*/