#include<iostream>
using namespace std;

int main(){
    // int n, a, b, c, d;
    // cin>>n;
    // a=n%10;
    // n=n/10;
    // b=n%10;
    // n=n/10;
    // c=n;
    // d=a+b+c;
    // cout<<"sum of three digit numbers= "<<d;
    // return 0;

        // int n;
        // cin>>n;
        // (n%2==0)?cout<<"even number":cout<<"odd number";
        // return 0;


        // int a,b;

        // cin>>a>>b;
        // (a>b)?cout<<"the large number is  "<<a:cout<<"the large number is   "<<b;
        // return 0;
    
        int a, b;
        cin>>a>>b;
        (a==b)?cout<<a<<" and "<<b<<" are equal":((a>b)?cout<<" not equal and "<<a <<" is greater":cout<<" not equal and "<< b <<" is greater");
        return 0;

}