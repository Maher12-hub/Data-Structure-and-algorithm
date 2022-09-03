#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<pair<int,string>>vec;
for(int i=0;i<5;i++){
    int n;
    string s;
    cin>>n>>s;
    vec.push_back(make_pair(n,s));

}
/**
vector<pair<int,string>>::iterator it;
for(it=vec.begin();it!=vec.end();it++){
    cout<<it->first<<" "<<it->second<<endl;
}
**/
for(int i=0;i<5;i++){
    cout<<vec[i].first<<" "<<vec[i].second<<endl;
}
return 0;
}
