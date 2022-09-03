#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<int>data){

for(int i=0;i<data.size();i++){
    cout<<data[i]<<endl;
}

}


int main(){
vector<int>data={1,2,3,4,5,6};
/** push_back function
for(int i=0;i<10;i++){
    int a;
    cin>>a;
    data.push_back(a);
}
print(data);
**/
///data.begin()
///data.end()
data.insert(data.begin()+5,10);
print(data);
return 0;
}
