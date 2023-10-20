#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int minArrayCost(vector<int>& arr) {

	int Gdiff = 0;
	int cost = 0;
	int diff;
	for (int i = 0; i < arr.size()-1; i++) {
		diff = abs(arr[i] - arr[i + 1]);
		cost += pow(diff, 2);
		if (diff > Gdiff) { Gdiff = diff; }
	}
	diff=pow(Gdiff, 2) / 2;
	cost -= diff;

	return cost;
}

int main() {

	int size;
	int ele;
	vector<int> arr;

	cout << "enter the size of array : " << endl;
	cin >> size;
	cout << "enter the elements : " << endl;
	for (int i = 0; i < size; i++) {
		cin >> ele;
		arr.push_back(ele);
	}

	cout << minArrayCost(arr);
}
