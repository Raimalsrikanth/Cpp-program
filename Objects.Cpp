#include<iostream>
#include<iomanip>
Using namespace std;
Class Time
{
Private:u
int Seconds;
int hh,mm,ss;
Public:
Void getTime(void);
Void convert Into seconds(void);
Void display Time (void);
};
Void Time::getTime(void)
{
Cout<<"Enter time:"<<endl;
Cout<<"Hours?";cin>>hh;
Cout<<"Hours?";Cin>>mm;
Cout<<"seconds?";cin>>ss;
}
Void Time::Convert Into seconds (void)
{
Seconds=hh*3600+60+ss;
}
Void Time ::display Time (void)
{
Cout<<"The time is ="<<setw(2)<<setfill('0')<<hh<<";";"
                     <<setw(2)<<setfill('0')<<mm<<";"
                     <<setw(2)<<setfill('0')<<ss<<endl;
Cout <<"Time in total seconds:"<<seconds;
}
int main()
{
Time T; //Creating Objects
T.getTime();
T.Convert Into seconds();
T.display Time()
Return 0;
}
