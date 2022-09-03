#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *a[],int n){
    for(int i=0;i<n-1;i++){
        int index_min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[index_min]) index_min=j;
        }
        if(index_min != i){
            int *temp=a[i];
            *a[i]=a[index_min];
            *a[index_min]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int *arr[5];
for(int i=0;i<5;i++){
    cin>>arr[i];
}
selection_sort(&arr[0],5);
return 0;
}
