//
// Created by Samandar's PC on 30/09/2024.
//
#include <iostream>
using namespace std;
int main() {
    int N,A,B, sum=0, i=1, dsum=0,j;
    cin>>N>>A>>B;
    while (i<=N) {
        j=i;
        while (j!=0) {
            dsum += j%10;
            j/=10;
        }
        if (dsum>=A && dsum<=B) {
            sum+=i;
        }
        i++;
        dsum=0;
    }
    cout<<sum;
    return 0;
}