#include<iostream>
#include<unordered_map>
#include<vector>
#include<set>

using namespace std;


int minCost(vector<int>& arr){

    unordered_map<int, int> umap;
    multiset<int,greater<int>> ms;
    int count=0;
    int f=1;
    
    for(int i =0;i<arr.size();i++){
        umap[arr[i]]++;
    }

    for(auto a : umap){
        ms.insert(a.second);
    }

    for(auto a : ms){
        count+=(a*f++);
    }
    return count;
}

int main(){
    vector<int> arr;
    int ele, size;

    cout<<"enter the size of array : "<<endl;
    cin>>size;
    cout<<"enter the array elements : "<<endl;
    for(int i =0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<minCost(arr);
}