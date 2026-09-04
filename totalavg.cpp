#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,e;
    int total=0,avg=0,Percent=0;
    cin>>a>>b>>c>>d>>e;
    total=a+b+c+d+e;
    avg=total/5;
    Percent=(float(total)/500) *100;
    cout<<"Total: "<<total<<endl;
    cout<<"Average: "<< avg<<endl;
    cout<<"Percentage: "<< Percent;
}