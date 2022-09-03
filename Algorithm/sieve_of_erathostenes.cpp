#include<iostream>
using namespace std;
void prime_sieve( int n){
 int prime[n]={0};
 int i,j;
for(i=2;i<=n;i++){
    if(prime[i]==0){
        for(j=i*i;j<=n;j+=i){
            prime[j]=1;
        }
    }

}
for(i=2;i<=n;i++){
    if(prime[i]==0) cout<<i<<" ";
}
cout<<endl;

}


int main(){
 int n;
cin>>n;
prime_sieve(n);
return 0;

}
