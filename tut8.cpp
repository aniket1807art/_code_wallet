#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    // -----< constants in C++ >-----


    // const int a = 34;
    // cout<<"The constant value was "<<a<<endl;
    // a = 45;
    // cout<<"The constant value is "<<a<<endl;

    // // ----< Manipulators >----

    // 1. endl
    // 2. setw


    // int a=3, b=4, c=5656;
    // cout<<"Values are: "<<a<<endl;
    // cout<<"Values are: "<<b<<endl;
    // cout<<"Values are: "<<c<<endl;

    // cout<<"Values are: "<<setw(2)<<a<<endl;
    // cout<<"Values are: "<<setw(4)<<b<<endl;     
    // cout<<"Values are: "<<setw(4)<<c<<endl;

    //----<opretors precedence>----

    int a=4, b=5;
    int c = ((((a*5)+b)-45)+55);
    cout<<c;
    
           
    
    return 0;

}
