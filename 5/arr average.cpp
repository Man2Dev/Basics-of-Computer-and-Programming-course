#include <iostream>
using namespace std;
int main() {
    int n, i;
    float num[10], sum=0.0, average;
    n = 10;
    while (n <10 ) {
           cin >> n;}
    for(i = 0; i < n; ++i) {
        cin >> num[i];
        sum += num[i];
        } average = sum / n;
    cout << average;
    return 0;
    }