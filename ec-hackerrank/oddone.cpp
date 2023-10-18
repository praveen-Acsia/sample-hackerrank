#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string findOdd(vector<string>& arr) {
	int diff;
	vector<vector<int>> vals;
	string oddone="";

	for (int i = 0; i < arr.size(); i++) {
		vector<int>val;
		for (int j = 0; j < arr[i].length()-1; j++) {
			diff = arr[i][j + 1] - arr[i][j];
			val.push_back(diff);
		}
		vals.push_back(val);
	}
	for (int i = 0; i < vals.size(); i++) {
		if (count(vals.begin(), vals.end(), vals[i]) == 1) {
			oddone = arr[i];
			return oddone;
		}
	}
	return oddone;
}

int main() {

	int size;
	string ele;
	vector<string> arr;

	cout << "enter no of strings : " << endl;
	cin >> size;
	cout << "enter strings : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> ele;
		arr.push_back(ele);
	}
	cout << findOdd(arr);

}
