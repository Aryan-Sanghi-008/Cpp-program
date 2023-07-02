#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reversenum = 0;
    while(n>0){
        int lastdigit = n%10;
        reversenum = reversenum*10 + lastdigit;
        n = n/10;
    }
    cout<<reversenum<<endl;
    return 0;
}