#include<iostream>
#include<vector>
#include<set>
#include<algorithm>

using namespace std;

int max_dist(vector<int>& arr1, vector<int>& arr2, int k) {

	set<int> s1(arr1.begin(), arr1.end());
	set<int> s2(arr2.begin(), arr2.end());
	int count = 0;

	if (arr1.size() != s1.size()) {
		for (auto a : s2) {
			if (find(s1.begin(), s1.end(), a) == s1.end()) {
				count++;
				if (count == k) {
					return (s1.size() + k);
				}
				else if (arr1.size() == s1.size() + count) {
					return arr1.size();
				}
			}
		}
	}
	return s1.size() + count;
}

int main() {

	int size1, size2;
	int ele;
	int k;
	vector<int> arr1;
	vector<int> arr2;

	cout << "enter the size of first array : ";
	cin >> size1;
	cout << "enter elements of first array : ";
	for (int i = 0; i < size1; i++) {
		cin >> ele;
		arr1.push_back(ele);
	}
	cout << "enter the size of second array : ";
	cin >> size2;
	cout << "enter elements of second array : ";
	for (int i = 0; i < size2; i++) {
		cin >> ele;
		arr2.push_back(ele);
	}
	cout << "enter the maximum no of operation : ";
	cin >> k;

	cout << max_dist(arr1, arr2, k);
}
