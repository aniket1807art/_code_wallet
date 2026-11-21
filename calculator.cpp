 #include <iostream>
 using namespace std;

 int main() {

    char ch;
    float a, b;
    cin>>a>>ch>>b;
    switch(ch)
    {
        case '+':
        cout<< a+b;
        break;

        case '-':
        cout<<a-b;
        break;

        case '*':
        cout<<a*b;
        break;

        case '/':
        cout<<a/b;
        break;

        default:
        cout<<"Invalid Input:";

    }
 }