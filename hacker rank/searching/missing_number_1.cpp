#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m;
cin>>n;
vector<int>a;
for(long long i=0;i<n;i++){
    long long num;
    cin>>num;
    a.push_back(num);
}
sort(a.begin(),a.end());
cin>>m;
vector<int>b;
for(long long i=0;i<m;i++){
    long long num;
    cin>>num;
    b.push_back(num);
}
sort(b.begin(),b.end());
long long i=0,j=0;
while(i<n && j<m){
    if(a[i]==b[j]){
        i++;j++;
        b[j-1]=0;
    }
    else if(a[i]>b[j]) j++;
    else i++;
}
set<int>st;
for(long long i=0;i<m;i++){
    if(b[i]!=0) st.insert(b[i]);
}
for(set<int>::iterator it=st.begin();it!=st.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
return 0;
}
