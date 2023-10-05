#include <iostream>
#include <unordered_map>


using namespace std;

void get_count(unordered_map<char, int>& map_, string s){
    for(int i =0 ; i<s.length(); i++){
        map_[s[i]]+=1;
    }
}

int min_opp(unordered_map<char, int>& map_){
    int count=0;
    for(auto m : map_){
        if(m.second > 1){
            count+=m.second/2;
        }
    }
    return count;
}

int main()
{
    string S;
    cin >> S;
    
    unordered_map<char,int> map_;
    
    get_count(map_, S);
    cout << min_opp;

    return 0;
}
