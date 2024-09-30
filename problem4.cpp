//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n,x,f;
    cin>>n>>x;
    if (n>=3) {
        if ((n-2)/x!=0) {
            cout<<f<<endl;
        }else {
            cout<<(f-1)<<endl;
        }
    }else {
        cout<<1;
    }
    return 0;
}