#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
vector<string>vec;
int n;
cin>>n;
for(int i=0;i<n;i++){
    string a;
    cin>>a;
    vec.push_back(a);
}

sort(vec.begin(),vec.end(),
     [](const string &l,const string &r){
     if(l.length() != r.length()){
        return l.length() < r.length();
     }
     else if(l.length() == r.length()){
        if(strcmp(l,r)>0) return l<r;
        else return l>r;
     }

     });

/**sort(vec.begin(),vec.end()); lexigiographically sorting
**/

for(int i=0;i<n;i++) cout<<vec[i]<<endl;
return 0;
}
