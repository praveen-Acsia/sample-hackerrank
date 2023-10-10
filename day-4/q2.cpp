#include<string>
#include<iostream>

using namespace std;

string final_str(string str){
    string temp;
	int count = 0;
	for (int i = str.length()-1; i >= 0; i--) {
        
		if (str[i] == '#') {
			count++;
			continue;
		}
		if(count){
		    count--;
		    continue;
		}else{
		    temp.push_back(str[i]);
		}
	}
	return temp;
}

int is_equal(string& str1, string& str2) {

	string first_str=final_str(str1);
	string second_str= final_str(str2);
	
	if(first_str==second_str)
	    return 1;
	
	return 0;
	
	
}


int main() {

	string str1;
	string str2;

	cout << "enter first string : " << endl;
	cin >> str1;
	
	cout << "enter second string : " << endl;
	cin >> str2;

	cout<<is_equal(str1, str2);
}
