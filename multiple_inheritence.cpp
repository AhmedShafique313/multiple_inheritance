#include<iostream>
using namespace std;

// fathers class
class father
{
    public:
        void funcA()
        {
            cout<<"Father inherited"<<endl;
        }
};  

// mothers class
class mother
{
    public:
        void funcB()
        {
            cout<<"Mother inherited"<<endl;
        }
};  
// sons class
class son : public father, public mother
{
    public:
};  

// main

int main()
{
    son c;
    c.funcA();
    c.funcB();
    cout<<"Son inherited by their parent"<<endl;
    return 0;
}