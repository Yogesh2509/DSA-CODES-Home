#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number : ";
cin>>num;

int ans=0;
int power=1;
while(num>0){
    int paritydigit =num%2;
    ans+=paritydigit*power;
    power*=10;
    num/=2;
}

cout<<"Binary number is : "<<ans<<endl;
return 0;
}