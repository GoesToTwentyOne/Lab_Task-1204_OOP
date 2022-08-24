#include<iostream>
using namespace std;
namespace myspace
{
    class myclass
    {
    public:
        void display()
        {
            cout<<"myspace::myclass::display()\n";
        }
    };
}
class myclass
{
public:
    void display()
    {
        cout<<"myclass::display()\n";
    }
};

int main()
{
    myspace::myclass obj1;
    myclass obj2;
    obj1.display();
    obj2.display();
    return 0;
}
