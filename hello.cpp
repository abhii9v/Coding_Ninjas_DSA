#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag = 0; // to check how many numbers have divided the number 
    for (int i = 2; i <=n; i++) // taking each number to check
    {
        flag = 0;
        for (int j = 1; j <= i; j++)    // checking each number 
        { 
            if(i%j==0)
            flag++;             // flag denotes the number of factors which divided i , including 1 and that number 
        }
        if(flag==2)           // if a number is only divided by 1 and itslelf then print number
            cout << i<<" ";
    }
}