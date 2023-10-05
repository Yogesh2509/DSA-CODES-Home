#include<iostream>
using namespace std;

int main(){     

    int num1=5;  //0101

    cout<<(num1<<1)<<endl;                //right shift

    cout<<(num1>>1)<<endl;                //left shift
 
    int num2=8;   //1000 
    cout<<(num1&num2)<<endl; //0             //bitwise and
    cout<<(num1|num2)<<endl; //1101 = 13           //bitwise or
   

    return 0;
}