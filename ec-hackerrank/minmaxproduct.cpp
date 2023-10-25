#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>

using namespace std;

vector<long long> minMaxProduct(vector<long long>& elements, vector<string>&queries){

    multiset<long long> result;
    vector<long long> minXmax;
    for(long i =0; i<queries.size();i++){
        string query=queries[i];

            if(query == "push"){
                result.insert(elements[i]); 
                minXmax.push_back((*result.begin())*(*result.rbegin()));
            }
            else{
                result.erase(result.find(elements[i]));
                minXmax.push_back((*result.begin())*(*result.rbegin()));
            }
    }
    return minXmax;
}

int main(){

    long size,qsize;
    string query;
    long long ele;
    vector<long long> elements;
    vector<string > queries;

    cout<<"enter the size of multiset : "<<endl;
    cin>>size;
    cout<<"enter the elements of multiset : "<<endl;
    for(long i=0;i<size;i++){
        cin>>ele;
        elements.push_back(ele);
    }
    cout<<"enter the no of queries : "<<endl;
    cin >> qsize;
    for(long i =0; i<qsize;i++){
        cin>>query;
        queries.push_back(query);
    }
    vector<long long>result=minMaxProduct(elements,queries);
    for(long i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}
