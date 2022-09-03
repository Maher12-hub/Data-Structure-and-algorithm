#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n=5;
int p[n]={0,5,3,2};
int dp[4]={0};
int i,j;
for(i=1;i<=n;i++){
        int profit=0,num=0;
    for(j=1;j<=i;j++){
        num=p[j]+dp[i-j];
        profit=max(profit,num);
    }
    dp[i]=profit;

}
int max=0;
for(i=1;i<=n;i++){
    cout<<dp[i]<<endl;
}
return 0;

}
