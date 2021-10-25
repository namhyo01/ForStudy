//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef struct Student {
//	int country_num;
//	int student_num;
//	int score;
//};
//
//Student student[103];
//int check_country[103];
//
//bool cmp(const Student &a1, const Student &a2) {
//	if (a1.score > a2.score)
//		return true;
//	return false;
//}
//
//int main() {
//	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> student[i].country_num >> student[i].student_num >> student[i].score;
//
//	sort(student, student + n,cmp);
//	
//	cout << student[0].country_num << " " << student[0].student_num << endl;
//	cout << student[1].country_num << " " << student[1].student_num << endl;
//	check_country[student[0].country_num]++;
//	check_country[student[1].country_num]++;
//	for (int i = 2; i < n; i++) {
//		if (check_country[student[i].country_num]==2) {
//			continue;
//		}
//		else {
//			cout << student[i].country_num << " " << student[i].student_num << endl;
//			break;
//		}
//	}
//
//		
//
//
//	system("pause");
//	return 0;
//}