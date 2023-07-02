#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    cout<<"Odd numbers are :-\n";
    for(int i=1; i<=n; i++){
        if(i%2==0){
        continue;
        }
        cout<<i<<endl;
    }
    return 0;
}