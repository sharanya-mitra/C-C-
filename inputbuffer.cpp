/*// C++ Code to explain why
// not clearing the input
// buffer causes undesired
// outputs
#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    int a;
    char ch[80];
     
    // Enter input from user
    // - 4 for example
    cin >> a;
     
    // Get input from user -
    // "GeeksforGeeks" for example
    cin.getline(ch,80);
     
    // Prints 4
    cout << a << endl;
     
    // Printing string : This does
    // not print string
    cout << ch << endl;
     
    return 0;
}
*/
// C++ Code to explain how
// "cin.ignore(numeric_limits
// <streamsize>::max(),'\n');"
// discards the input buffer
#include<iostream>
 
// for <streamsize>
#include<ios>    
 
// for numeric_limits
#include<limits>
using namespace std;
 
int main()
{
    int a;
    char str[80];
     
    // Enter input from user
    // - 4 for example
    cin >> a;
     
    // discards the input buffer
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
     
    // Get input from user -
    // GeeksforGeeks for example
    cin.getline(str, 80);
     
    // Prints 4
    cout << a << endl;
     
    // Printing string : This
    // will print string now
    cout << str << endl;
 
    return 0;
}