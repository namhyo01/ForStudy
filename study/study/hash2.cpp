#include <math.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
#include <unordered_map>
#include <string>
#include <vector>
using namespace std;
/*
bool comp(string s1, string s2) {
	if(s1.length() != s2.length())
		return s1.length()>s2.length();	//string 사전 역순 
	return s1 > s2;
}
struct Trie {
	Trie * numbers[10];
	Trie() {
		for (int i = 0; i < 10; i++)
			numbers[i] = nullptr;
	}
	void insert(const char * num) {
		if (*num == '\0') {//문자가 끝이라면
			return;
		}
		int number = *num - '0';
		if (numbers[number] == NULL) {
			cout << number << endl;
			numbers[number] = new Trie();
		}
		numbers[number]->insert(num + 1);
	}
	bool find(const char *num) {
		if (*num == '\0')
			return true;
		if (numbers[*num - '0'] == NULL) {
			return false;
		}
			return numbers[*num - '0']->find(num + 1);

	}
};


bool solution(vector<string> phone_book) {
	bool answer = true;
	Trie a;
	sort(phone_book.begin(), phone_book.end(), comp);
	for (string phone : phone_book) {
		if (a.find(phone.c_str())) {
			answer = false;
			return answer;
		}
		else {
			a.insert(phone.c_str());
		}
	}

		return answer;
}


int main() {
	vector<string> phone_book;
	string s;
	for (int i = 0; i < 3; i++) {
		getline(cin, s);
		phone_book.push_back(s);
	}
	
	cout << solution(phone_book);
	system("pause");


	return 0;
}*/