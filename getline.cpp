#include<iostream>
#include<cstring>

using namespace std;
int main()
{   string str;
    int t = 4;
    while (t--)
    {
     getline(cin,str);
     // Keep reading a new line while there is
     // a blank line
     while (str.length()==0)
     {
        getline(cin,str);
     }
    cout<< str << ":Newline" <<endl;
    }
    return 0;
}