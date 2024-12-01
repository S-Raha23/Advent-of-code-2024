#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> left;
    vector<int> right;
    int n=1000; //number of input lines
    
    
    //creating two vectors containing left and right elements
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        left.push_back(a);
        right.push_back(b);
    }
    long long sum=0;
    
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());

    //getting the difference
    for(int i=0;i<n;i++){
        int diff=abs(left[i]-right[i]);
        sum+=diff;
    }
    cout<<sum;
}