#include<iostream>
using namespace std;

int main(){
int n,m;
cout<<"Enter the number of rows : ";
cin>>n;
cout<<"Enter the number of columns : ";
cin>>m;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==1 || j==1 || i==n || j==n){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}

    return 0;
}