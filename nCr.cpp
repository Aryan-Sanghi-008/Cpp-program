#include<iostream>
using namespace std;
int fact(int num){
    int factorial = 1;
    for(int i=2; i<=num; i++){
        factorial*=i;
    }
    return factorial;
}
int main(){
    int n,r;
    cout<<"nCr of two numbers:-";
    cin>>n>>r;
    int res = fact(n)/(fact(r)*fact(n-r));
    cout<<res<<endl;
    return 0;
}