#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    // question 1-  form tables by given user input numbers.
    // int m, n, x, y;
    // cin>>m>>n;
    // for(y=m; y<=n; y++)
    // {
    //     for(x=1; x<=10; x++)
    //     {
    //         cout<<y<<"X"<<x<<"="<<y*x<<endl;    
                    
    //     }
    // }

    //question 2- display prime numbers from user input range m to n.
     
    // int n, m, y, x;
    // cin>>m>>n;
    // for(y=m; y<=n; y++)
    // {
    //     for(x=2; x<=y/2; x++)
    //     {
    //         if(y%x==0)
    //         break;
    //     }
    //     if(x>y/2)
    //     {
    //         cout<<y<<endl;
    //     }
    // }

    // pattern questions

        //  for(int x=1; x<=4; x++)
        //  {
        //     for(int y=1; y<=6; y++)
        //     {
        //         cout<<"*";
        //     }
        //     cout<<endl;
        //  }



        // int x, y, z=1;
        // for(x=1; x<=4; x++)
        // {
        //     for(y=1; y<=6; y++)
        //     {
        //         cout<<z++<<"  ";
        //     }
        //     cout<<endl;
        // }

        //  int x, y, z=1;
        // for(x=1; x<=5; x++)
        // {
        //     for(y=1; y<=x; y++)
        //     {
        //         cout<<"*";
        //     }
        //     cout<<endl;
        // }

        //  int x, y;
        // for(x=1; x<=5; x++)
        // {
        //     for(y=1; y<=x; y++)
        //     {
        //         cout<<" ";
        //     }
        //     for(y=1; y<=(6-x); y++)
        //     {
        //         cout<<"* ";
        //     }
            
        //     cout<<endl;
        // }

        //   int x, y;
        // for(x=1; x<=6; x++)
        // {
        //     for(y=1; y<=x; y++)
        //     {
        //         cout<<" ";
        //     }
        //     for(y=1; y<=(2*x-1); y++)
        //     {
        //         cout<<"*";
        //     }
        //      for(y=1; y<=x; y++)
        //     {
        //         cout<<" ";
        //     }
            
        //     cout<<endl;
        // }

        // triangle pattern

        // int x, y;
        // for (x=1; x<=5; x++)
        // {
        //     for(y=1; y<=5-x; y++)
        //     {
        //         cout<<" ";
        //     }
        //     {
        //         for (y=1; y<=2*x-1; y++)
        //         {
        //             cout<<"*";
        //         }
        //         cout<<endl;
        //     }
        // }


        // inverted triangle pattern

        //  int x, y;
        // for (x=1; x<=5; x++)
        // {
        //     for(y=1; y<=x-1; y++)
        //     {
        //         cout<<" ";
        //     }
        //     {
        //         for (y=1; y<=11-2*x; y++)
        //         {
        //             cout<<"*";
        //         }
        //         cout<<endl;
        //     }
        // }
          
         // triangle pattern using natural numbers
         
        //  int x, y;
        // for (x=1; x<=5; x++)
        // {
        //     for(y=1; y<=5-x; y++)
        //     {
        //         cout<<" ";
        //     }
        //     {
        //         for (y=2*x-1; y>=1; y--)
        //         {
        //             cout<<y;
        //         }
        //         cout<<endl;
        //     }
        // }

        //  int x, y;
        // for (x=1; x<=5; x++)
        // {
        //     for(y=1; y<=5-x; y++)
        //     {
        //         cout<<" ";
        //     }
        //     {
        //         for (y=63+2*x; y>=65; y--)
        //         {
        //             cout<<(char)y;
        //         }
        //         cout<<endl;
        //     }
        // }
        
        //  int x, y;
        // for (x=1; x<=5; x++)
        // {
        //     for(y=1; y<=5-x; y++)
        //     {
        //         cout<<" ";
        //     }
        //       for(y=1; y<=x; y++)
        //       {
        //         cout<<y;
        //       }
        //       for(y=x-1; y>=1; y--)
        //       {
        //           cout<<y;
        //       }
        //       cout<<endl;
            
        // }

         int x, y;
        for (x=1; x<=5; x++)
        {
            for(y=1; y<=5-x; y++)
            {
                cout<<" ";
            }
              for(y=x; y>=1; y--)
              {
                cout<<y;
              }
              for(y=2; y<=x; y++)
              {
                  cout<<y;
              }
              cout<<endl;
            
        }


    return 0;
}