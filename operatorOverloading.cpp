#include<iostream>
using namespace std;

class Complex{
    private:
        int x,y;
    
    public:
        Complex(int r=0, int i=0){
            x = r;
            y = i;
        }

        Complex operator +(Complex obj){
            Complex temp;
            temp.x = x+obj.x;
            temp.y = y+obj.y;

            return temp;
        }

        void print(){
            cout<<x<<" + i"<<y;
        }
};

int main(){
    Complex c1(4,6);
    Complex c2(3,5);
    Complex c3;

    c3 = c1+c2;
    c3.print();

    
    return 0;
}