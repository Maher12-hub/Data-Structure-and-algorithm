#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int vac[2000];
int pat[2000];
void bubble_sort(int vac[],int pat[],int n){
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        if(vac[j]>vac[j+1]){
            int temp=vac[j];
            vac[j]=vac[j+1];
            vac[j+1]=temp;
        }
        if(pat[j]>pat[j+1]){
            int temp=pat[j];
            pat[j]=pat[j+1];
            pat[j+1]=temp;
        }
    }
}

}

int main(){
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>vac[i];
}
for(int i=0;i<n;i++) cin>>pat[i];
bubble_sort(vac,pat,n);
int coun=0;
for(int i=0;i<n;i++){
    if(vac[i]>pat[i]) coun++;
}
if(coun==n) cout<<"yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
