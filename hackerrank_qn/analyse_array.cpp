#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int powerArray(vector<int>& arr) {

	vector<int> result;
	int max = 0;
	int ind=0;
	for (int i = 0; i < arr.size(); i++) {

		int curr = ((int)pow(arr[i], arr[i + 1])) % ((int)pow(10, 9) + 7);
		if(curr > max) {
			max = curr;
			ind = i+1;
		}
	}
	return ind;
}
int main() {

	int size;
	vector<int> arr;
	int ele;

	cout << "enter array size : " << endl;
	cin >> size;
	cout << "enter array elements : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> ele;
		arr.push_back(ele);
	}
	cout << powerArray(arr);
}
