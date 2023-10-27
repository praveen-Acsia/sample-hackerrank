#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<sstream>

using namespace std;

class Circle {

public:
	int radius;
	Circle(int& r) : radius(r) {}

};

class Square {

public:
	int side;
	Square(int s) : side(s) {}

};

class Shape {

public:

	set<int> radii;
	set<int> sides;
	Shape(set<int>& r, set<int>& s) : radii(r), sides(s) {}

	Shape operator+(Shape& obj) {
		for (auto it = obj.radii.begin(); it != obj.radii.end(); it++) {
			this->radii.insert(*it);
		}
		for (auto it = obj.sides.begin(); it != obj.sides.end(); it++) {
			this->sides.insert(*it);
		}
		return *this;
	}
	Shape operator+(Square& obj) {
		this->sides.insert(obj.side);
		return *this;
	}
	Shape operator+(Circle& obj) {
		this->radii.insert(obj.radius);
		return *this;
	}
};

vector<Shape> do_query(vector<Circle>& clArr, vector<Square>& sqArr, vector<Shape>& shArr, vector<string>& qrArr) {

	string class1;
	string class2;
	string ind1;
	string ind2;
	int iInd1;
	int iInd2;

	vector<Shape> result;
	for (int i = 0; i < qrArr.size(); i++) {
		stringstream ss;
		string x;
		ss << qrArr[i];
		ss >> class1;
		ss >> ind1;
		ss >> class2;
		ss >> ind2;
		iInd1 = stoi(ind1) - 1;
		iInd2 = stoi(ind2) - 1;

		if (class2 == "Square") {
			//shArr[iInd1] = shArr[iInd1] + sqArr[iInd2];
			//result.push_back(shArr[iInd1]);
			result.push_back(shArr[iInd1] + sqArr[iInd2]);
		}
		else if (class2 == "Circle") {
			//shArr[iInd1] = shArr[iInd1] + clArr[iInd2];
			//result.push_back(shArr[iInd1]);
			result.push_back(shArr[iInd1] + clArr[iInd2]);

		}
		else {
			/*shArr[iInd1] = shArr[iInd1] + shArr[iInd2];
			result.push_back(shArr[iInd1]);*/
			result.push_back(shArr[iInd1] + shArr[iInd2]);
		}
	}
	return result;

}

int main() {

	int ele;
	int nocl, nosq, nosh, noqr;
	string s;
	vector<Circle> clArr;
	vector<Square> sqArr;
	vector<Shape> shArr;
	vector<string> qrArr;


	cout << "enter no of circles : ";
	cin >> nocl;
	cout << "enter radii : ";
	for (int i = 0; i < nocl; i++) {
		cin >> ele;
		Circle cl(ele);
		clArr.push_back(cl);
	}

	cout << "enter no of squares : ";
	cin >> nosq;
	cout << "enter sides : ";
	for (int i = 0; i < nosq; i++) {
		cin >> ele;
		Square sq(ele);
		sqArr.push_back(sq);
	}

	cout << "enter no of shapes : ";
	cin >> nosh;
	for (int i = 0; i < nosh; i++) {
		set<int> cls;
		set<int> sqs;
		for (int j = 0; j < nocl; j++) {
			cin >> ele;
			cls.insert(ele);
		}
		for (int k = 0; k < nosq; k++) {
			cin >> ele;
			sqs.insert(ele);
		}
		Shape sh(cls, sqs);
		shArr.push_back(sh);
	}
	cout << "enter no of queries : ";
	cin >> noqr;
	cin.ignore();
	cout << "enter queries : ";
	for (int i = 0; i < noqr; i++) {
		getline(cin, s);
		qrArr.push_back(s);
	}

	vector<Shape> result = do_query(clArr, sqArr, shArr, qrArr);

	for (auto a : result) {
		for (auto it = a.radii.begin(); it != a.radii.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
		for (auto it = a.sides.begin(); it != a.sides.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}

}
