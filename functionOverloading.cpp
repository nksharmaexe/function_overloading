// Function Overloading
#include<iostream>
using namespace std;

class Calculator{
    public:
        void sum(int a,int b){
            cout<<"a+b:"<<a+b<<endl;
        }

        void sum(double a,double b){
            cout<<"a+b:"<<a+b<<endl;
        }
};

int main(){
    Calculator obj1,obj2;
    obj1.sum(4,5);
    obj2.sum(3.5,2.7);

    return 0;
}