#include<iostream>
using namespace std;
int main(){
    int n,m,x;
    cin>>n>>m>>x;
    int arr[n][m];
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==x){
                cout<<i+1<<" "<<j+1<<endl;
                flag = true;
            }
        }
    }
    if(flag){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}