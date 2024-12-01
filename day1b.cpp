#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2;

    unordered_map<int,int> mpp;//creating a hashmap


    for(int i=0;i<1000;i++){
        int a,b;
        cin>>a>>b;
        v1.push_back(a);
        v2.push_back(b);
        mpp[b]++; //updating hashmap according to right elements while taking the input
    }
    long long sum=0;

    //getting the result
    for(int i=0;i<1000;i++){
        int count=mpp[v1[i]];
        int res=v1[i]*count;
        sum+=res;
    }
    cout<<sum;
}