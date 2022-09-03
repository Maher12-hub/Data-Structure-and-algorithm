#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(vector<vector<int>>data){
    cout<<"total row "<<data.size()<<endl;
    for(vector<int>row:data){
            cout<<"["<<row.size()<<"]="<<" ";
    for(int column:row) cout<<column<<" ";
    cout<<endl;

    }
cout<<endl;

}


int main(){
vector<vector<int>>data;
for(int i=0;i<3;i++){
        vector<int>row;
    for(int j=0;j<5;j++){
        int n;
        cin>>n;
        row.push_back(n);
    }
data.push_back(row);
}
print(data);

}
