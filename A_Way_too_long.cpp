#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    int n;
    string ch;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ch;
    }
    if(ch.length() < 10){
        cout << ch << endl;
    }
    else{
        cout << "Hello";
    }
    return 0;
}