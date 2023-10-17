#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int vCheck(string& s) {
	if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u') {
		if (s[s.length() - 1] == 'a' || s[s.length() - 1] == 'e' || s[s.length() - 1] == 'i' || s[s.length() - 1] == 'o' || s[s.length() - 1] == 'u') {
			return 1;
		}
	}
	return 0;
}

int nofones(vector<int>& buffer,int& start ,int& until) {
	int count=0;
	
	for (int i = start; i <= until; i++) {
		if (buffer[i] == 1) { count++; }
	}
	return count;
}

pair<int, int> get_se(string& query) {
	pair<int, int> idx;
	string s;
	string e;
	for (int i = 0; i < query.length(); i++) {

		if (query[i] == '-') { break; }
		s.push_back(query[i]);
	}
	for (int i = 0; i < query.length(); i++) {

		if (query[query.length() - 1 - i] == '-') { break; }
		e.push_back(query[query.length() - 1 - i]);
	}
	reverse(e.begin(), e.end());
	idx.first = stoi(s)-1;
	idx.second = stoi(e)-1;

	return idx;
}
vector<int> hasVowels(vector<string>& arr, vector<string>& query) {

	vector<int> result;
	vector<int>buffer;
	pair<int, int> idx;
	int count;

	for (int i = 0; i < arr.size(); i++) {
		buffer.push_back(vCheck(arr[i]));
	}
	for (int i = 0; i < query.size(); i++) {

		idx = get_se(query[i]);

		if (idx.first == idx.second) {
			result.push_back(buffer[idx.first]);
			continue;
		}

		count = nofones(buffer, idx.first, idx.second);
		result.push_back(count);
	}
	return result;
}

int main() {


	string ele;
	int aSize;
	int qSize;
	vector<string> arr;
	vector<string> query;

	cout << "enter the size of array" << endl;
	cin >> aSize;
	cout << "enter the elements of array" << endl;
	for (int i = 0; i < aSize; i++) {
		cin >> ele;
		arr.push_back(ele);
	}
	cout << "enter the size of queries" << endl;
	cin >> qSize;
	cout << "enter the queries" << endl;
	for (int i = 0; i < qSize; i++) {
		cin >> ele;
		query.push_back(ele);
	}

	vector<int>result = hasVowels(arr, query);

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}
}
