#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int n;
cin>>n;
ll count_arr[100005];
memset(count_arr,0,sizeof(count_arr));
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    count_arr[x]++;

}
ll maxI1=INT_MIN;
ll maxI2=INT_MIN;
maxI1=count_arr[1];
maxI2=count_arr[0];
ll curr_max;
for(int i=2;i<=100000;i++){
        curr_max=max(maxI1,i*count_arr[i]+maxI2);
        maxI2=maxI1;
        maxI1=curr_max;

}
cout<<maxI1<<endl;
return 0;
}
