#include<iostream>
using namespace std;
int linear_search(int a[],int n,int x){
int i;
for(i=0;i<n;i++){
    if(a[i]==x) return i;
}
i=-1;
return i;
}

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<linear_search(a,n,x)<<endl;
    return 0;

}
