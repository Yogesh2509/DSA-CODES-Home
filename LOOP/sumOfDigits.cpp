//Sum of the digits given by the user

#include<iostream>
using namespace std;
int main(){

int num, sum=0;
cout<<"Enter the number : ";
cin>>num;

while(num>0){
    int lastdigit = num%10;
    sum+=lastdigit;
    num/=10;
}
cout<<"Sum of the digits is :"<<sum<<endl;

    return 0;
}