#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}

int add( int num1, int num2, int num3){
    int sum= num1+num2+num3;
    return sum;
}

float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}

int main(){
    int a,b;
    cout<<"Enter the first number : ";
    cin>>a;

    cout<<"Enter the second number : ";
    cin>>b;

    float c,d;
    cout<<"Enter the first float value : ";
    cin>>c;

    cout<<"Enter the second float value : ";
    cin>>d;
    
cout<<add(a,b)<<endl;
cout<<add(a,b,1)<<endl;          // ye , 1 mtlb hai ki 2nd vala function run ho
cout<<add(c,d)<<endl;               //this is float valued function soo iske lie float value input krvani hogi

    return 0;
}