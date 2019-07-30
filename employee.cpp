#include<iostream>
using namespace std;
class employee{
                    string name;
                    int id;
                    int cabin_no;

                public:
                    void emp_get(string str,int ide,int cab)
                    {
                            name=str;
                            id=ide;
                            cabin_no=cab;
                    }
                    void emp_print()
                    {

                            cout<<"\nName:"<<name;
                            cout<<"\nID:"<<id;
                            cout<<"\nCabin No:"<<cabin_no;

                    }
               };
int main()
{
    employee emp;
    emp.emp_get("Rohit",54,29);
    emp.emp_print();
    return 0;
}
