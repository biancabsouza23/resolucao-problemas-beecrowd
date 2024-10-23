#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(){
    int num1, num2, num3, aux;
    cin >> num1 >> num2 >> num3;
    
    if(num2 > num1){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    if(num3 > num1){
        aux = num1;
        num1 = num3;
        num3 = aux;
    }

    if(num3 > num2){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }
    cout << num2 << '\n';
    
    return 0;
}
