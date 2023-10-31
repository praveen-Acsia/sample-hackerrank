#include<iostream>
#include<vector>


using namespace std;

int mincost(int& initr, int& initc, int& finalr, int& finalc, vector<int>& costrows, vector<int>& costcols) {

	int cost = 0;

	for (int i = min(initr, finalr); i < max(initr, finalr); i++) {

		cost += costrows[i];
	}
	for (int i = min(initc, finalc); i < max(initc, finalc); i++) {

		cost += costcols[i];
	}
	return cost;
}

int main() {

	int nofr, nofc, initr, initc, finalr, finalc, ele;
	vector<int> costrows, costcols;

	cout << "enter no of rows of grid : " << endl;
	cin >> nofr;
	cout << "enter no of cols of grid : " << endl;
	cin >> nofc;
	cout << "enter init row : " << endl;
	cin >> initr;
	cout << "enter initc : " << endl;
	cin >> initc;
	cout << "enter final row : " << endl;
	cin >> finalr;
	cout << "enter final col : " << endl;
	cin >> finalc;
	cout << "enter row cost : " << endl;
	cin >> ele;
	for (int i = 0; i < nofr - 1; i++) {
		cin >> ele;
		costrows.push_back(ele);
	}
	cout << "enter col cost : " << endl;
	cin >> ele;
	for (int i = 0; i < nofc - 1; i++) {
		cin >> ele;
		costcols.push_back(ele);
	}
	cout << mincost(initr, initc, finalr, finalc, costrows, costcols);
}
