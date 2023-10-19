#include<iostream>
#include<string>
#include<vector>

using namespace std;

string kSmallest(string& s, int& k) {

	int count = 0;
	int min_len = s.length();
	string csubs, psubs = "";
	int l, r = 0;
	vector<int> ones;
	int oidx = 0;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '1') {
			count++;
			ones.push_back(i);
		}
		if (count == k) {
    
			l = ones[oidx++];
			r = (i - l) + 1;
			csubs = s.substr(l, r);
      
			if (csubs.length() <= min_len) {
        
				if (csubs.length() == min_len) { psubs = csubs > psubs ? psubs : csubs; }
				else { psubs = csubs; }
				min_len = csubs.length();
			}
			count--;
			if (psubs.length() == k) { return psubs; }
		}
	}
	return psubs;
}

int main() {

	string s;
	int k;

	cout << "enter the number : " << endl;
	cin >> s;
	cout << "enter k : " << endl;
	cin >> k;

	cout << kSmallest(s, k);
}
