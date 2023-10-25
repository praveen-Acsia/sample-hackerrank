#include<bits/stdc++.h>

using namespace std;

int dominatingXorPairs(vector<int>& arr){
    int count=0;
    for(int i =0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if((arr[i]^arr[j])>(arr[i]&arr[j])){
                count ++;
            }

        }
    }
    return count;
}

int main(){
    int size;
    vector<int> arr;
    int ele;

    cout<<"enter size of the array : "<<endl;
    cin>>size;
    cout<<"enter the array elements : "<<endl;
    for(int i=0;i<size;i++){
        cin>>ele;
        arr.push_back(ele);
    }
    cout<<dominatingXorPairs(arr);
}
