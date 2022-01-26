// #include<iostream>
// using namespace std; 
// class abc
// {
//     int x;
//     int y;
//     void sum();
//     public:
//         void getdata();
//         void putdata();
// };
// void abc :: getdata()
// {
//     cout << "\n\nEnter two integers : ";
//     cin >> x >> y;
// }
// void abc :: putdata()
// {
//     cout << "x = " << x << "  y = " <<y;
//     sum();
// }
// void abc :: sum()
// {
//     cout << " and their sum = " << x+y;
// }
// int main()
// { 
//     abc a,b;
//     a.getdata();
//     a.putdata();
//     b.getdata();
//     b.putdata();
//     return 0;
// }
// #include<iostream>
// #include<string.h>
// #include<iomanip>
// using namespace std;
// class student
// {
//     int A,B,C,D;
//     char *sname;
    
//     public :
//     int sum();
//     void getmarks();
//     void putmarks(); 
// };
// void student ::getmarks()
// {
// cout <<"\n\nEnter the marks of four subject : ";
// cin >> A >> B >> C >> D;
// char el[60];
// cout << "Enter name of the student : ";
// cin >> el;
// sname = new char[strlen(el)];
// strcpy(sname,el);
// //delete el; It's not dinamic
// }
// int student ::sum()
// {
//     int total=A+B+C+D;
//     return total;
// }
// void student ::putmarks()
// {
//     cout << "\n\nStudent name : "<<sname <<"\n";
//     cout<<"The marks of the sutdent are "<<A << " "<<B << " " <<C << " " <<D;
//     //sum();
// }
// int main()
// {
//     int sant,shara;
//     student santunu,sharanya;
//     sharanya.getmarks();
//     sharanya.putmarks();
//     sant=santunu.sum();
//     santunu.getmarks();
//     santunu.putmarks();
//     shara=sharanya.sum();    
//     cout<<setw(10)<<"santunu"<<setw(10)<<sant<<endl
//         <<setw(10)<<"sharanya"<<setw(10)<<shara<<endl;
//     return 0;

// }
