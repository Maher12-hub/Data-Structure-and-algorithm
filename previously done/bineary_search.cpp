#include<iostream>
using namespace std;
int bineary_search(int a[],int n,int x){
int left,mid,right;
left=0;
right=n-1;
while(left<=right){
    mid=(left+right)/2;
    if(a[mid]==x) return mid;
    if(a[mid]<x) left=mid+1;
    else right=mid-1;
}
return -1;


}


int main(){

int n,x,i;
cin>>n>>x;
int a[n];
for(i=0;i<n;i++){
    cin>>a[i];
}
int b=bineary_search(a,n,x);
cout<<"position of "<<x<<"  ,in the array is "<<b<<endl;
return 0;
}
