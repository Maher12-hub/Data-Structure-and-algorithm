#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
map<string,int>m;
map<string,int>::iterator it;
for(int i=0;i<10;i++){
    int n;
    string s;
    cin>>s>>n;
    m.insert(make_pair(s,n));
}
for(it=m.begin();it!=m.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}
