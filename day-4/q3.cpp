#include<iostream>
#include<string>

using namespace std;

string decript(string& encript, int& k) {
	int curr;
	string decript;
	k=k%26;
	for (int i = 0; i < encript.length(); i++) {
		curr = (int)encript[i] - k;
		if(curr<65){
		    curr = 90 -(65-curr)+1;
		}
		decript.push_back((char)curr);
	}
	return decript;
}

int main() {

	string encript;
	int k;

	cout << "enter encripted string : " << endl;
	cin >> encript;
	cout << "enter k" << endl;
	cin >> k;

	cout << decript(encript, k);
}
