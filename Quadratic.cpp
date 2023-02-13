#include <iostream>
#include <cmath>
using namespace std;

class Quadratic{
    private:
        double a, b, c;
    
    public:
        Quadratic(){
            a = 0, b = 0, c = 0;
        }
        void set(double newA, double newB, double newC){
            a= newA;
            b= newB;
            c= newC;
        }
        double getA() { return a; }
        double getB() { return b; }
        double getC() { return c; }

    private:

    int getNumberOfRoots(){
        int nroots = 0;
        if((a==0&&b==0)&&c==0){
            nroots= 3;
        }
        else if((a==0&&b==0)&&c!=0){
            nroots= 0;
    }
    else if(a==0&&b!=0){
            nroots= 1;
    }
    else if(a!=0){

        if((b*b)< (4*a*c))
        nroots= 0;

        else if((b*b)== (4*a*c))
        nroots= 1;

        else if((b*b)> (4*a*c))
        nroots= 2;
    }
    return nroots;
    }

    double getFirstRoot(){
        double x = (-b + sqrt((b * b) - (4 * a * c)))/2*a;
        return x;
    }

     double getSecondRoot(){
        double y = (-b - sqrt((b * b) - (4 * a * c)))/2*a;
        return y;
    }
    
    
};

int main(){
        Quadratic obj;
        cout<<obj.getA()<<" "<<obj.getB()<<" "<<obj.getC()<<endl; // Testing constructor 
        obj.set(3.2, 5.3, 6.7);          // Testing void set function 
        cout<<obj.getA()<<" "<<obj.getB()<<" "<<obj.getC()<<endl;

        // Testing getNumberOfRoots function 
        obj.set(3.9, 5.7, 8.7); // Testing
        cout<<obj.getNumberOfRoots()<< endl;
}