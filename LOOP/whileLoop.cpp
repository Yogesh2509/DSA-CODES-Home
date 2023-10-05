#include<iostream>
using namespace std;

int main(){

    int n;
cout<<"Enter the natural number : ";
cin>>n;

int sum=0;
int i=1;                        //loop variable

while(i<=n){
    sum+=i;
    i++;
}

cout<<"Sum is "<<sum<<endl;



    return 0;
}