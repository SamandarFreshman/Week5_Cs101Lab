//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int n,CN;
    string o="";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin>>CN;
        while (CN!=0) {
            o+=to_string(CN%10)+" ";
            CN=CN/10;
        }
        o+="\n";
    }
    cout<<o<<endl;
    return 0;
}