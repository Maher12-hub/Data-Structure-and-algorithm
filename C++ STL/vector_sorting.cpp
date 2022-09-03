#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>vec;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}
