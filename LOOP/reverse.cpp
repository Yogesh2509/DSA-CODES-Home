//Reverse of the given number by the user

#include<iostream>
using namespace std;
int main(){
int num;
cout<<"Enter the number : ";
cin>>num;

int rev=0;
while(num>0){

 int lastdigit = num%10;
    rev=rev*10 + lastdigit;
    num/=10;
}
cout<<"Reverse number is :"<<rev<<endl;
    return 0;
}