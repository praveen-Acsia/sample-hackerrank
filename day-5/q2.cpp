#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

int minGroups(vector<int>& arr, int mxSpread) {

	sort(arr.begin(), arr.end());
	int min = arr[0];
	int groups = 1;
	
	for (int i = 0; i < arr.size(); i++) {
		if ((arr[i] - min) > mxSpread) {
			groups++;
			min = arr[i];
		}
	}
	return groups;
}

int main() {

	int maxSpread;
	int size;
	vector<int> arr;
	int ele;

	cout << "enter size of array" << endl;
	cin >> size;
	cout << "enter max spread" << endl;
	cin >> maxSpread;
	cout << "enter array elements" << endl;
	for (int i = 0; i < size; i++) {
		cin >> ele;
		arr.push_back(ele);
	}

	cout << minGroups(arr,maxSpread);
}
