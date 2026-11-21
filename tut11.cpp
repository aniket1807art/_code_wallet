#include <iostream>
using namespace std;

int main() {
    
    /*break statement
    */
    // for (int i=0; i<=20; i++)
    // {
    //     if(i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    // }

    /*continue statement*/

    for (int i=0; i<=20; i++)
    {
        if(i==16){
            continue;
        }
        cout<<i<<endl;
    }


    return 0;

}