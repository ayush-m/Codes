/*
https://www.hackerrank.com/challenges/possible-path
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b){
    if(a==0 || b==0){
        return 1;
    }
    long long r;
    if(b>a){
        r=a;
        a=b;
        b=r;
    }
    while(b!=0){
        r=b;
        b=a%b;
        a=r;
    }
    return a;
}



int main() {
    int T;
    long long a, b, x, y;
    cin >> T;
    while(T--){
        cin >> a >> b >> x >> y;
        if(gcd(a, b)==gcd(x, y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}