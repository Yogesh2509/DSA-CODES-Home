#include<iostream>
using namespace std;
int main(){

int a,b;
cout<<"Enter the base number : ";
cin>>a;

cout<<"Enter the power number : ";
cin>>b;

int result=1;
for(int i=1;i<=b;i++){
    result*=a;
}
    cout<<"So "<<a<<" raise to power "<<b<<" : "<<result<<endl;

    return 0;
}