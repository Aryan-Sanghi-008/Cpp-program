#include<iostream>
using namespace std;
int main(){
    int n,m,target;
    cin>>n>>m>>target;
    int mat[n][m];
    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>mat[i][j];
        }
    }
    int r=0, c=m-1;
    bool found = false;
    while(r<n && c>=0){
        if(mat[r][c]== target){
            found = true;
        }
        if(mat[r][c] < target){
            r++;
        }
        else{
            c--;
        }
    }
    if(found){
        cout<<"Element found at "<<r+1<<"th row and "<<c+1<<"th column";
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}