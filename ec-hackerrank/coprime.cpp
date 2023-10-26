#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

vector<int> coPrime(vector<int>& arr) {

	vector<int> result;
	for (int i = 0; i < arr.size(); i++) {
		int count = 0;
		for (int j = 1; j <= arr[i]; j++) {
			if (__gcd(j,arr[i]) == 1) {
				count++;
			}
		}
		result.push_back(count);
	}
	return result;
}

int main() {

	int ele;
	int size;
	vector<int> arr;

	cout << "enter the size of the array : ";
	cin >> size;
	cout << "enter the elements of the array : ";
	for (int i = 0; i < size; i++) {
		cin >> ele;
		arr.push_back(ele);
	}
	vector<int> result = coPrime(arr);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "  ";
	}
	
}
