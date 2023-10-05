#include<iostream>
using namespace std;
int main(){
    
int num;
cout<<"Enter the number : ";
cin>>num;
int ans=0, power=1;

while(num>0){
    int lastdigit = num%10;
    ans = ans +lastdigit*power;
    power*=2;
    num/=10;
}
cout<<"Decimal number to binary number is :"<<ans<<endl;


    return 0;
}