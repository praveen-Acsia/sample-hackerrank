#include <iostream>
#include <string>
#include <string.h>


using namespace std;

bool ifPalindrome(string str);
void strBreakPalin(string str);

int main(){

  string sPalin="Aa";
  while(!ifPalindrome(sPalin)){
    cout << "enter a palindrome." << endl;
    cin >> sPalin;
  }
  strBreakPalin(sPalin);


  return 0;
}
bool ifPalindrome(string str){
  int n = str.length();
   for (int i = 0; i < n / 2; i++){
        if(str[i]==str[n-i-1]){
            continue;
        }
        else{
            return false;
        }
   }
  return true;
}
void strBreakPalin(string str){
    int total=0;
    for(int i =0; i<str.length(); i++){
        
        if(str[i]!='a'){
            str[i]='a';
            if(!ifPalindrome(str)){
                break;
            }
        }
        
        total+=int(str[i]);
    }
    if(total==str.length()*97){
        cout<<"IMPOSSIBLE";
    }
    else{
        cout << str;
    }
}

