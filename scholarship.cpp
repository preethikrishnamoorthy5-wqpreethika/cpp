#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if (a>0 && a<=500 && b>0 && c>0 && c<=100){
        if (a>=450 && b<=200000 && c>=90){
            cout<<"Scholarship:100%";
        }
        else if (a>=400 &&b<=300000 && c>=85){
            cout<<"Scholarship:75%";
        }
        else if (a>=350 && b<=500000 && c>=80){
            cout<<"Scholarship:50%";
        }
        else if (a>=300 && b<=500000 && c>=75){
            cout<<"Scholarship:25%";
        }
        else{
            cout<<"Not Eligible";
        }
        
    }
}











