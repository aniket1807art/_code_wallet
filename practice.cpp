#include <iostream>
using namespace std;;

int main() {
    // int x;
    // float bill, surcharge, final_bill;

    // cin>>x;
    // if (x<=100)
    // {
    //     bill= 1.5*x;
    // }
    // else if (x>100 && x<200)
    // {
    //     bill= 2*x;
    // }
    // else {
    //     bill= x*3;
    // }

    // surcharge = bill*20/100;
    // final_bill = bill+surcharge;

    // cout<<final_bill;
    
    char ch;

    float r, a, b, h, bs;
    cin>>ch;
    switch(ch)
    {
        case 'C':
        cin>>r;
        cout<<3.14*r*r;
        break;

        case 'T':
        cin>>bs>>h;
        cout<<0.5*bs*h;
        break;

        case 'R':
        cin>>a>>b;
        cout<<a*b;
        break;

        default:
        cout<<"Invalid Input:";
        break;
        

    } 






}