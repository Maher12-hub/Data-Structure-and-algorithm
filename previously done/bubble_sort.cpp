#include<iostream>
using namespace std;
void bubble_sort(int a[],int n){
int i,j,k,temp;
for(i=0;i<n;i++){
    for(j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
for(k=0;k<n;k++) cout<<a[k]<<" ";
    cout<<endl;

}

}


int main(){
int i,n;
cin>>n;
int a[n];
for(i=0;i<n;i++) cin>>a[i];
bubble_sort(a,n);
return 0;

}
