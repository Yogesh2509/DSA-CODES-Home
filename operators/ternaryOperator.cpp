#include<iostream>
using namespace std;

int main(){

    int marks;
    cin>>marks;
    if(marks>33){
        cout<<"Pass"<<endl;
    }
    else{
        cout<<"Fail"<<endl;
    }
    
    marks>33 ? cout<<"Pass"<<endl : cout<<"Fail"<<endl;
                // if else m jaha pe 4 5 lines ka code linkne ki jarurat hoti vahi prr ternarry operator 1 he line m vhi kaam krr deta h


return 0;
}