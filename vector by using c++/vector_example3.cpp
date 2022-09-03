#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>input(){
vector<vector<int>>arr;
for(int i=0;i<6;i++){
    vector<int>row;
    for(int j=0;j<6;j++){
        int a;
        cin>>a;
        row.push_back(a);
    }
    arr.push_back(row);
}
return arr;
}
int solve(vector<vector<int>>arr){
int mx=-10000;
for(int x=0;x<4;x++){
        int sum=0;
    for(int y=0;y<4;y++){
        sum=arr[x][y]+arr[x][y+1]+arr[x][y+2]
                     +arr[x+1][y+1]+
            arr[x+2][y]+arr[x+2][y+1]+arr[x+2][y+2];
        mx=max(mx,sum);

    }

}
return mx;

}



int main(){
vector<vector<int>>arr;
arr=input();
cout<<solve(arr)<<endl;
return 0;
}
