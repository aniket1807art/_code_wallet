 #include<iostream>
 using namespace std;

 int main(){
 
  
//  int n, a, b, c, d;
//     cin>>n;
//     a=n%10;
//     n=n/10;
//     b=n%10;
//     n=n/10;
//     c=n;
//     d=a+b+c;
//     cout<<"sum of three digit numbers= "<<d;
//     return 0;


// int a, b, c;
//   cin>>a>>b>>c;
//   (a>b)?((a>c)? cout<<"the greatest no.="<<a:cout<<"the greatest no.="<<c):
//   (b>c)?cout<<"the greatest no.="<<b:cout<<"the greatest no.="<<c;
//   return 0;
  


  int n;
    cin>>n;
    (n%100==0)?((n%400==0)?cout<<"Leap Year": cout<<"Not a Leap Year"):
    (n%4==0)?cout<<"Leap Year":cout <<"Not a Leap Year";
    return 0;
 }