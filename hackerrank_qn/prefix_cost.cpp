#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
#include<set>

using namespace std;

int minCost(vector<int>& arr){
    unordered_map<int, int> umap;
    vector<int> result;
    int count=0;
    
    for(int i =0;i<arr.size();i++){
        umap[arr[i]]++;
    }
    
    for(int i=0;i<umap.size();i++){

        int largest=0;
        int largest_num;

        for(auto a : umap){
            if(a.second>=largest){
                largest=a.second;
                largest_num=a.first;
            }
        }
        for(int j=0;j<largest;j++){
            result.push_back(largest_num);
        }
        umap[largest_num]=-1;
    }
    for(int i=1;i<=result.size();i++){
        vector<int> subres(result.begin(),result.begin()+i);
        set<int> subset(subres.begin(),subres.end());
        count+=subset.size();
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