#include<iostream>
using namespace std;
int main(){
int n,i,j,k,count=0;
cin>>n;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
            for(k=0;k<3;k++){
        count=count+1;
            }
    }
    }
cout<<count<<endl;
return 0;

}
