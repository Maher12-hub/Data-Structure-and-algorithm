#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x){
int l=0,r=n-1,mid;
while(l<=r){
    mid=(l+r)/2;
    if(x<a[mid]) r=mid-1;
    else if(x>a[mid]) l=mid+1;
    else return mid;
}
}


int main(){
int n,x;
cin>>n>>x;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
cout<<binary_search(a,n,x)<<endl;
return 0;
}
