#include<iostream>
using namespace std;

// int main(){

//     int p=5;
//     int &q=p;       //here it is used to assign same memory location to p as q...

//     q++;
//     cout<<p<<endl;  

//     cout<<&p<<endl;
//     cout<<&q<<endl;        //here & symbol is used for getting the memory location

// return 0;
// }
void changeValue(int &z, int &y){
    z=100;
    y=99;
}
int main(){
    
int a=5;
int b=6;
changeValue(a,b);
cout<<a<<endl;
cout<<b<<endl;



return 0;
}