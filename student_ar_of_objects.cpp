#include<iostream>
using namespace std;
class student
{
    int roll;
    int total;
    float avg;
    public:
        void getdata()
        {
            cout<<"Enter Roll : ";
            cin >> roll;
            cout<<"Enter total " ;
            cin >> total;

        }
        void avrg(student s[],int n)
        {
            int tot=0;
            for(int i=0;i<n;i++)
            {
                tot=tot+s[i].total;
            }
            avg=tot/float(n);
        }
        void showavg()
        {
            cout << "\n\nAverage Total : " << avg;
        }
};
int main()
{
    int n,i;
    cout << "Enter number of students : ";
    cin >> n;
    student st[n],av;
    for(i=0;i<n;i++)
    {
        cout << "\nFor Student " << i+1 << endl;
        st[i].getdata();
    }
    av.avrg(st,n);
    av.showavg();
    return 0;

}
