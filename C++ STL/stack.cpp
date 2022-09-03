#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
stack<string>s;
for(int i=0;i<3;i++){
     string a;
     cin>>a;
     s.push(a);
}
while(!s.empty()){
    string b;
    b=s.top();
    cout<<b<<endl;
    s.pop();
}
return 0;
}
