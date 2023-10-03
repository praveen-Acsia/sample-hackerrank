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
}

bool ifPalindrome(string str){
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

