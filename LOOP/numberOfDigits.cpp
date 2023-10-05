//find the numbers of digits 

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;

int digits = 0;
while(num>0){
    digits++;
    num=num/10;
}
cout<<"Total number of digits is "<<digits<<endl;
    return 0;
}