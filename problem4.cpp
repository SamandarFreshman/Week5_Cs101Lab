//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n,x;
    cin>>n>>x;
    if (n>2) {
        if (((n-2)/x)!=0) {
            cout<<((n-2)/x)+1<<endl;
        }else {
            cout<<((n-2)/x)+2<<endl;
        }
    }else {
        cout<<1;
    }
    return 0;
}