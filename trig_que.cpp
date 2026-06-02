#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a : ";
    cin>>a;
    int b;
    cout<<"Enter b : ";
    cin>>b;
    int c;
    cout<<"Enter c : ";
    cin>>c;
    if((a+b)>c && (b+c)>a && (c+b)>b){
        cout<<"a and b and c is a sides of tri";
    }
    else{
        cout<<"a,b,c, is not a sides of trig";
    }
}