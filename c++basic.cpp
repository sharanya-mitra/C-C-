// #include <iostream>
// #include <climits>   // integer limits in header file

// using namespace std;
// int main()
// {
//q-1

//   cout<<"HA HA life is sucks \n";
//   cout<<"----------------------";
//   cout<<"The life is so good yeah "<<endl;

// q-2

// int x=20,y=50;
// cout<<x+y;
  
  //q-3
  
//     cout << "\n\n Check the upper and lower limits of integer :\n";
// 	cout << "--------------------------------------------------\n";
// 	cout << " The maximum limit of int data type :                  " << INT_MAX << endl;
// 	cout << " The minimum limit of int data type :                  " << INT_MIN << endl;
// 	cout << " The maximum limit of unsigned int data type :         " << UINT_MAX << endl;
// 	cout << " The maximum limit of long long data type :            " << LLONG_MAX << endl;
// 	cout << " The minimum limit of long long data type :             " << LLONG_MIN << endl;
// 	cout << " The maximum limit of unsigned long long data type :   " << ULLONG_MAX << endl;
// 	cout << " The Bits contain in char data type :                  " << CHAR_BIT << endl;
// 	cout << " The maximum limit of char data type :                 " << CHAR_MAX << endl;
// 	cout << " The minimum limit of char data type :                 " << CHAR_MIN << endl;
// 	cout << " The maximum limit of signed char data type :          " << SCHAR_MAX << endl;
// 	cout << " The minimum limit of signed char data type :          " << SCHAR_MIN << endl;
// 	cout << " The maximum limit of unsigned char data type :        " << UCHAR_MAX << endl;
// 	cout << " The minimum limit of short data type :                " << SHRT_MIN << endl;
//     cout << " The maximum limit of short data type :                " << SHRT_MAX << endl;
//     cout << " The maximum limit of unsigned short data type :       " << USHRT_MAX << endl;
//    cout << endl;

//q-4
//    return 0;
// }
 
// #include <iostream>
// using namespace std;
 
// int main() 
// {
//     cout << "\n\n Find Size of fundamental data types :\n";
// 	cout << "------------------------------------------\n";
//    cout << " The sizeof(char) is :          " << sizeof(char) << " bytes \n" ;
//    cout << " The sizeof(short) is :         " << sizeof(short) << " bytes \n" ;
//    cout << " The sizeof(int) is :           " << sizeof(int) << " bytes \n" ;
//    cout << " The sizeof(long) is :          " << sizeof(long) << " bytes \n" ;
//    cout << " The sizeof(long long) is :     " << sizeof(long long) << " bytes \n";
//    cout << " The sizeof(float) is :         " << sizeof(float) << " bytes \n" ;
//    cout << " The sizeof(double) is :        " << sizeof(double) << " bytes \n";
//    cout << " The sizeof(long double) is :   " << sizeof(long double) << " bytes \n";
//    cout << " The sizeof(bool) is :          " << sizeof(bool) << " bytes \n\n";
//    return 0;
// }

// #include <iostream>
// using namespace std;
 
// int main() 
// {
//     cout << "\n\n Check whether the primitive values crossing the limits or not :\n";
// 	cout << "--------------------------------------------------------------------\n";
//    char gender = 'F';             // char is single-quoted
//    bool isEmployed = true;         // true(non-zero) or false(0)
//    unsigned short numOfsons = 2; // [0, 255]
//    short yearOfAppt = 2009;      // [-32767, 32768]
//    unsigned int YearlyPackage = 1500000;   // [0, 4294967295]
//    double height = 79.48;       // With fractional part
//    float gpa = 4.69f;           // Need suffix 'f' for float
//    long totalDrawan = 12047235L;     // Suffix 'L' for long
//    long long balance = 995324987LL;  // Need suffix 'LL' for long long int  

//    cout << " The Gender is : " << gender << endl;
//    cout << " Is she married? : " << isEmployed << endl;
//    cout << " Number of sons she has : " << numOfsons << endl;
//    cout << " Year of her appointment : " << yearOfAppt << endl;
//    cout << " Salary for a year : " << YearlyPackage << endl;
//    cout << " Height is : " << height << endl;
//    cout << " GPA is " << gpa << endl;
//    cout << " Salary drawn upto : " << totalDrawan << endl;
//    cout << " Balance till : " << balance << endl;   
//    return 0;
// }

// #include<iostream>
// #include<cmath>
// #include <ctime>
// using namespace std;

// int main()
// {

//  time_t t = time(NULL);
//  tm* tPtr = localtime(&t);
//  cout << "\n\n Display the Current Date and Time :\n";
//  cout << "----------------------------------------\n";
//  cout << " seconds = " << (tPtr->tm_sec) << endl;
//  cout << " minutes = " << (tPtr->tm_min) << endl;
//  cout << " hours = " << (tPtr->tm_hour) << endl;
//  cout << " day of month = " << (tPtr->tm_mday) << endl;
//  cout << " month of year = " << (tPtr->tm_mon)+1 << endl;
//  cout << " year = " << (tPtr->tm_year)+1900 << endl;
//  cout << " weekday = " << (tPtr->tm_wday )<< endl;
//  cout << " day of year = " << (tPtr->tm_yday )<< endl;
//  cout << " daylight savings = " <<(tPtr->tm_isdst )<< endl;
//         cout << endl;
//         cout << endl;


//         cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
//         cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; 
//            cout << endl;
//     return 0;
// }

