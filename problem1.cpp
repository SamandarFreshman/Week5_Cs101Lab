//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n,c=0;
    char s=' ';
    cin >> n;
    while (n>=1) {
        for (int i=1;i<=n;i++) {
            cout<<i;
        }
        for (int i=1; i<=c; i++) {
            cout<<s;
        }
        for (int i=1; i<=c; i++) {
            cout<<s;
        }
        for (int i=n; i>=1;i--) {
            cout<<i;
        }
        cout<<endl;
        n--;
        c++;
    }
}