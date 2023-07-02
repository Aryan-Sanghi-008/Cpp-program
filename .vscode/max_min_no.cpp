#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
    }
    int maxNo = INT_MIN;
    int minNo = INT_MAX;
    for(int i = 1; i<=n; i++){
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout<<"Max NO. ="<<maxNo<<"\n"<<"Min No. ="<<minNo<<endl;
    return 0;
} 