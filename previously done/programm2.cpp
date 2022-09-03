#include<iostream>
using namespace std;
int main(){
int n,result;
cin>>n;
/**
result=n*(n+1)/2;
cout<<result<<endl;
**/
for(int i=1;i<=n;i++){
    result+=i;
}
cout<<result<<endl;


}
