#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    cout<<"Enter no. of rows:-";
    cin>>rows;
    cout<<"\n Enter no. of columns:-";
    cin>>columns;
    cout<<"Here is the box you want ^^\n";
    for(int i=1; i<=rows;i++){
        for(int j=1;j<=columns; j++){
        cout<<"*";
        }
        cout<<endl; 
    }
    return 0;
}