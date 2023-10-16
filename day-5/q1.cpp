#include<iostream>
#include<string>

using namespace std;

int loopCount(string s) {
	int count = 0;
	int ele;
	for (int i = 0; i < s.length(); i++) {

		ele = s[i] - '0';

		switch (ele) {
		case 0:
			count++;
			break;
		case 4:
			count++;
			break;
		case 6:
			count++;
			break;
		case 8:
			count += 2;
			break;
		case 9:
			count++;
			break;
		}
	}
	return count;
}


int main() {

	string s;
	cout << "enter the number : " << endl;
	cin >> s;

	cout << loopCount(s);
	return 0;
}
