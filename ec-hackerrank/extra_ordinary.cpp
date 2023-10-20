#include<iostream>
#include<string>

//using namespace std;

bool exord(std::string& subs) {
	int sum = 0;
	for (int i = 0; i < subs.length(); i++) {
		sum += ((int)subs[i] - 96) / 3;
	}
	if (sum % subs.length() == 0) {
		return true;
	}
	return false;
}

int countSubstrings(std::string& s) {
	int count = 0;
	std::string sub;
	for (int i = 0; i < s.length(); i++) {
		for (int j = 1; j <= s.length() - i; j++) {
			sub = s.substr(i, j);
			if (exord(sub)) count++;
		}
	}
	return count;
}

int main() {
	std::string s;
	std::cout << "enter the string : " << std::endl;
	std::cin >> s;

	std::cout << countSubstrings(s);
	
}
