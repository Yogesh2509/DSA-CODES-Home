#include<iostream>
using namespace std;

int main(){
    
    int age;

    cout<<"Enter the age : ";
    cin>>age;

if(age<12){
    cout<<"Child"<<endl;
}
else if(age>18){
    cout<<"Adults"<<endl;
}
else{
    cout<<"Teenager"<<endl;
}

return 0;
}