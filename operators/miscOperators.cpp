#include<iostream>
using namespace std;

int main(){     

    int a=4;
    cout<<sizeof(a)<<endl;  //4

    char name='a';
    cout<<sizeof(name)<<endl; //1                 //sizeof

    bool flags;
    a==name? flags = true : flags = false;     //ternary operators
    cout<<flags<<endl;  //0

    cout<<(&a)<<endl;         //location of a in the memory 

    return 0;
}