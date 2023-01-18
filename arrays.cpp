#include <iostream>
using namespace std;
int main(){
    int size=0;
    cin >> size;
    int arr[size];
    int i = 0;
    while(i<size){
        cin >> arr[i];
        i++;
    }
    for (int i = 0;i<size;i++){
        int sum = 0;
        for(int j=i;j<size;j++){
            sum += arr[j];
    }
    arr[i] = sum;
    }
    i = 0;
    while(i<size){
    cout << arr[i] << " ";
    i++;
    }
}
