#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<string>vec;
bool comp(string a,string b){
    cout<<"comparing "<<a<<" and "<<b<<endl;
    if(a.length() == b.length()) return a<b;
    else return a.length()<b.length();
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        cin>>a;
        vec.push_back(a);
    }

    sort(vec.begin(),vec.end(),comp);
    for(int i=0;i<n;i++) cout<<vec[i]<<" ";
    cout<<endl;
return 0;
}
