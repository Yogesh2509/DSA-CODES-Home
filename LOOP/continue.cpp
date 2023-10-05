// All the numbers from 1 to 50 except the multiple of 3...

#include<iostream>
using namespace std;

int main(){

for (int i=1;i<=50;i++){
    if(i%3==0){
        continue;      // it is used for skiping any alteration 
    }
    cout<<i<<endl;
}


    return 0;
}