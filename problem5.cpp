//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int N,n=1,c=0;
    cin>>N;
    while (c!=N) {
        if ((n%10)!=3 && (n%3)!=0) {
            c++;
            if (c==N) {
                cout<<n<<endl;
            }
            n++;
        }else {
            n++;
        }
    }
    return 0;
}