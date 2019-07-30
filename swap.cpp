#include<iostream>
using namespace std;
void swap_(int no1,int no2)
{
    no1+=no2;
    no2=no1-no2;
    no1-=no2;
    cout<<"in function swap_:\na:"<<no1<<"\tb:"<<no2<<"\n";
}
void swap_ref(int &no1,int &no2)
{
    no1+=no2;
    no2=no1-no2;
    no1-=no2;
    cout<<"in function swap_ref:\na:"<<no1<<"\tb:"<<no2<<"\n";
}
int main()
{
    int a=2;
    int b=4;
    cout<<"before swap:\na:"<<a<<"\tb:"<<b<<"\n";
    swap_(a,b);
    cout<<"after swap_:\na:"<<a<<"\tb:"<<b<<"\n";
    swap_ref(a,b);
    cout<<"after swap_ref:\na:"<<a<<"\tb:"<<b<<"\n";
    return 0;
}
