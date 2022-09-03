#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef pair<string,int>pai;
int main(){
vector<pai>vec;
vector<pai>::iterator it;
int n,t;
cin>>n>>t;
for(int i=0;i<n;i++){
    string s;
    long long int a;
    cin>>s>>a;
    vec.push_back(make_pair(s,a));
}
sort(vec.begin(),vec.end(),
     [](const pai &l, const pai &r){
     if(l.second != r.second){
        return l.second>r.second;
     }
     return l.first<r.first;
     }
     );
     int cn=0;
     for(it=vec.begin();it!=vec.end();it++){
        cn++;
        cout<<it->first<<endl;
        if(cn==t) break;
     }

return 0;
}
