#include<vector>
#include<iostream>
#include<math.h>

using namespace std;

int triArea(vector<long>& Xs, vector<long>& Ys) {

	long long base = 0;
	long long height = 0;
	long long area;
	if ((count(Xs.begin(), Xs.end(), Xs[0])) == 2) {

		if ((count(Xs.begin(), Xs.end(), Xs[1])) == 2) {
			base = abs(Ys[0] - Ys[1]);
			height = abs(Xs[2] - Xs[0]);
		}
		else {
			base = abs(Ys[0] - Ys[2]);
			height = abs(Xs[1] - Xs[0]);
		}
	}
	else {
		if ((count(Xs.begin(), Xs.end(), Xs[1])) == 2) {
			base = abs(Ys[1] - Ys[2]);
			height = abs(Xs[0] - Xs[1]);
		}
	}

	if (!base && !height) {

		if ((count(Ys.begin(), Ys.end(), Ys[0])) == 2) {

			if ((count(Ys.begin(), Ys.end(), Ys[1])) == 2) {
				base = abs(Xs[0] - Xs[1]);
				height = abs(Ys[2] - Ys[0]);
			}
			else {
				base = abs(Xs[0] - Xs[2]);
				height = abs(Ys[1] - Ys[0]);
			}
		}
		else {
			if ((count(Ys.begin(), Ys.end(), Ys[1])) == 2) {
				base = abs(Xs[1] - Xs[2]);
				height = abs(Ys[0] - Ys[1]);
			}
		}
	}
	area = (base * height) / 2;

	return area;
}
int main() {

	vector<long> Xs;
	vector<long> Ys;
	long ele;

	cout << "enter the Xs : ";
	for (int i = 0; i < 3; i++) {
		cin >> ele;
		Xs.push_back(ele);
	}
	cout << "enter the Ys : ";
	for (int i = 0; i < 3; i++) {
		cin >> ele;
		Ys.push_back(ele);
	}
	cout << triArea(Xs, Ys);
}
