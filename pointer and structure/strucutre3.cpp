#include<iostream>
using namespace std;
struct customer{
int milk;
int egg;
int biscuit;

};


int main(){
customer customer1,customer2,customer3;
customer1={3,12,4};
customer2={4,20,5};
customer3={5,22,6};
cout<<"customer 1------:"<<endl;
cout<<"milk= "<<customer1.milk<<" litre"<<endl;
cout<<"Egg= "<<customer1.egg<<" piece"<<endl;
cout<<"Biscuit= "<<customer1.biscuit<<" packet"<<endl;
cout<<"\n"<<endl;
cout<<"customer 2------:"<<endl;
cout<<"milk= "<<customer2.milk<<" litre"<<endl;
cout<<"Egg= "<<customer2.egg<<" piece"<<endl;
cout<<"Biscuit= "<<customer2.biscuit<<" packet"<<endl;
cout<<"\n"<<endl;
cout<<"customer 3------:"<<endl;
cout<<"milk= "<<customer3.milk<<" litre"<<endl;
cout<<"Egg= "<<customer3.egg<<" piece"<<endl;
cout<<"Biscuit= "<<customer3.biscuit<<" packet"<<endl;
return 0;
}
