#include<iostream>
using namespace std;
class dog{
                private:
                    void bark_priv()
                    {
                        cout<<"bark_priv() can't be accessed directly";
                    }
                public:
                    void bark_pub()
                    {

                        cout<<"bark_pub() can be accessed directly";

                    }

                 protected:
                    void bark_pro()
                    {
                        cout<"bark_pro() can't be accessed directly";
                    }
            };

int main()
{
    dog shiro;
    shiro.bark_priv();
    shiro.bark_pro();
    shiro.bark_pub();
    return 0;
}
