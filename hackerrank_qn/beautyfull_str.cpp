#include<iostream>
#include<string>
#include<math.h>

using namespace std;

long minOp(string& s){
    long count =0;

    if(s.length()==1) return count;

    for(long i = 0; i < s.length()-1; i++){
        
        if(s[i]==s[i+1] || abs((int)s[i]-(int)s[i+1])==1){
            count++;
            i++;
        }
    }
    return count;
}

int main(){

    string s;
    cout<<"enter the string : "<<endl;
    cin>>s;

    cout<<minOp(s);
}