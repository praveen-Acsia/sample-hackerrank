#include<iostream>
#include<vector>
#include<string>

using namespace std;

int minOp(string& s) {

	int count = 0;

	for (int i = 0; i < s.length() - 1; i++) {
		if (s[i] == '1' && s[i + 1] == '1') {
			count++;
			s[i] = '0';
			s[i + 1] = '0';
		}
	}
	for (int i = 0; i < ((s.length() / 2) * 2) - 1; i += 2) {

		if (s[i] != s[i + 1]) { count += 2; }
	}
	if (s.length() % 2 == 1 && s[s.length() - 1] == '1') { count += 2; }

	return count;
}

int main() {

	string s;

	cout << "enter the string : " << endl;
	cin >> s;
	cout << minOp(s);
}
