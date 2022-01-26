#include <iostream>
#include <ctime>
#include<cmath>
using namespace std;
int add(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}
int sub(int n3,int n4)
{
    int def=n3-n4;
    return def;
}
float findAreatri(float a, float b, float c)
{
    // Length of sides must be positive
    // and sum of any two sides
    // must be smaller than third side.
    if (a < 0 || b < 0 || c < 0 ||
       (a + b <= c) || a + c <= b ||
                       b + c <= a)
    {
        cout << "Not a valid trianglen";
        exit(0);
    }
    float s = (a + b + c) / 2;
    return sqrt(s * (s - a) *
                    (s - b) * (s - c));
}
class gfg
{
     
public : double sum(int n)
{
    double i, s = 0.0;
    for (i = 1; i <= n; i++)
    s = s + 1/i;
    return s;
}
};

int main()
{ //display the program ax+by=c;
    // int a,b,c;
    // a=5;
    // b=8;
    // c=18;
    // cout<<a<<"X"<<"+"<<b<<"Y"<<"="<<c;
    // return 0;

    //5 multipication table;
    // int a=5;
    // for(int i=1;i<=10;i++)
    // {
    //     cout<<"5X"<<i<<"="<<a*i<<endl;
    // }
    //a,b,c is three varible use equation x=a/(b-c)
    // float a, b, c;
    // float x;
    // cout << "Enter the value of a ";
    // cin >> a;
    // cout << "Enter the value of b";
    // cin >> b;
    // cout << "Enter the value of c";
    // cin >> c;
    // cout << "After applying the x=a/(b-c) your answer is ";
    // x=(b - c);
    // cout << a/x;
    // current date and time on the current system
//    time_t now = time(0);

//    // convert now to string form
//    char* date_time = ctime(&now);

//    cout << "The current date and time is: " << date_time << endl;
//  int a,b;
//  cout<<"Enter two number";
//  cin>>a>>b;
//  cout<<add(a,b);
//  cout<<sub(a,b);
// int n;
// cout<<"Enter the number";
// cin>>n;
// for(int i=1;i<=n;i++)
// {
//     for(int j=1;j<=i;j++)
//     {
//         cout<<" * ";
//     }
//     cout<<"\n";
// }
//area of an triangle 
// float a = 3.0;
//     float b = 4.0;
//     float c = 5.0;
   
//     cout << "Area is " << findAreatri(a, b, c);
//     return 0;
//distance of two point
// write the series of 1+1/2+1/3+1/4+1/5+...+1/n;
//  gfg g;
//     int n;
//     cout<<"enter the number :";
//     cin>>n;
//     cout << "Sum is " << g.sum(n);
// typedef unsigned int ui;
// 	ui i = 5, j = 8;
// 	cout << "i = " << i << endl;
// 	cout << "j = " << j << endl;
// 	return 0;
//  unsigned int n=5678;
//     for(int i=1;n>0;i++)
//     {   cout<<n<<"\n"; 
//         n=n/10;
     
//     }
 
}      


