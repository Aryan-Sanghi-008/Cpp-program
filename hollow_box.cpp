#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"Enter no. of rows:-";
    cin>>rows;
    cout<<"Enter no. of columns:-";
    cin>>columns;
    cout<<"Here is your hollow rectangular box ^^\n";
    for(int i=1; i<=rows; i++){
        for(int j=1; j<=columns;j++){
            if(i==1 || i==rows || j==1 || j==columns){
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