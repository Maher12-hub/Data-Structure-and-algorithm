#include<iostream>
using namespace std;
int main(){
int n1,i,n2;
cin>>n1;
int even[n1+1];
for(i=0;i<n1+1;i++){
    even[i]=0;
}
for(i=0;i<n1+1;i+=2){
    even[i]=1;
}
cin>>n2;
if(even[n2]) cout<<n2<<"is a even number"<<endl;
else cout<<n2<<" is a odd number"<<endl;
return 0;
}

