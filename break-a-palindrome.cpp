#include <iostream>
#include <string>


using namespace std;

bool ifPalindrome(string str);
void strBreakPalin(string str);

int main(){

  string sPalin;
  while(!palindrome(sPalin)){
    cout << "enter a palindrome." << endl;
    cin >> sPalin;
  }
  ifPalindrome(sPalin);
}

bool ifPalindrome(string str){
  string revStr;
  int n = str.length();
  for (int i = 0; i < n / 2; i++)
        revStr[i]=str[n-i];
  cout<<revStr;
}

