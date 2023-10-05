#include<iostream>
#include<vector>

using namespace std;


int min_play(vector<int> v){
    int total=0;
    int player1=0;
    int player2=0;
    
    for(int i =0; i<v.size(); i++){
        if(v[i]==0){
            total--;
        }
        else{
            total++;
        }
    }
    
    if(total<0){
        return 0;
    }

    for(int i =0; i<v.size(); i++){
        if(v[i]==0){
            player1--;
        }
        else{
            player1++;
        }
        player2=total-player1;
        if(player1>player2){
            return i+1;
        }
    }
    return 0;
}

int main(){
    
    int n;
    cin >> n;
    
    vector<int> v;
    
    int val;
    for(int i =0; i<n; i++){
        cin >>val;
        v.push_back(val);
    }
    cout<<min_play(v);
}

