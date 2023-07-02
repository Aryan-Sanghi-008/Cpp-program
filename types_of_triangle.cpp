#include<iostream>
using namespace std;
int main()
{
    int sidea,sideb,sidec;
    cin>>sidea>>sideb>>sidec;
    if(sidea==sideb && sideb==sidec){
    cout<<"Equilateral triangle"<<endl;
    }
    else if(sidea==sideb || sideb==sidec || sidea==sidec)
    {
    cout<<"Isosceles triangle"<<endl;
    }
    else{
        cout<<"Scalene triangle"<<endl;
    }
    return 0;
}