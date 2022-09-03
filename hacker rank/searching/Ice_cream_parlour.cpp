#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int arr[n];
    for(int m=0;m<n;m++) cin>>arr[m];

    for(int j=0;j<n;j++){
            int sum=0;
        for(int l=j+1;l<n;l++){
            sum=arr[j]+arr[l];
            if(sum==k){
                cout<<j+1<<" "<<l+1<<endl;
                break;
            }
            else sum=0;
        }
    }

}
return 0;

}
