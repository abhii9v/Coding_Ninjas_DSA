#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void revstr(string& str)
{
    int i = 0;
    int n = str.length();
    while(i<n/2){
        swap(str[i], str[n - i - 1]);   
        i++;
    }
}
int main(){
    string str;
    cin >> str;
    revstr(str);
    cout << str; // reversed string 
}