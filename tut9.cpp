#include <iostream>
#include <iomanip>
    using namespace std;
    int main() {
        // control structures in C++
        // 1.sequence structure
        // 2. selction structure
        // 3. loop structure

        // 1. if else statement
        
        // int age;
        // cout<<"Enter your age: ";
        // cin>>age;
        // if ((age<18) && (age>1)) {
        //     cout<<"you are not allowed to my party"<<endl;
        // }
        // else if(age==18) {
        //     cout<<"you are allowed to my party but you have to give me your parents consent"<<endl;
        // }
        // else if ((age>18) && (age<=100)) {
        //     cout<<"Welcome to my party"<<endl;
        // }
        // else {
        //     cout<<"you are not born yet"<<endl;
        // }
        
        // 2. switch case statement

        
        int age;
        cout<<"Enter your age: ";
        cin>>age;
        
        switch (age) {
            cin>>age;

            
            case 18:
            cout<<"you are allowed to my party but you have to give me your parents consent" <<endl;
            break;

            case 22:
            cout<<"you are allowed to my party"<<endl;
            break;

            default:
            cout<<"you should not be here"<<endl;
        
        }
        return 0;

    }