#include<iostream>
using namespace std;
void selection_sort(int a[],int n){
int i,j,index_min,temp;
for(i=0;i<n-1;i++){
        index_min=i;
    for(j=i+1;j<n;j++){
        if(a[j]<a[index_min]) index_min=j;

    }
if(i!=index_min){
    temp=a[i];
    a[i]=a[index_min];
    a[index_min]=temp;
}
}
for(i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;


}
int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    selection_sort(a,n);
    return 0;
}
