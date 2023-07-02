#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    //transpose of a matrix
    cout<<"Transpose of a matrix:- "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}