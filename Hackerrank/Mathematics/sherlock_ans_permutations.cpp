/*https://www.hackerrank.com/challenges/sherlock-and-permutations*/
/*
This code has also the code for calcualting nCr%M efficiently.(M is prime greater than n)
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007

long long int power(long long int a, long long int b, long long int M){
    if(b==0){
        return 1;
    }
    long long int temp;
    if(b%2==0){
        temp=power(a, b/2, M);
        return ((temp%M)*(temp%M))%M;
    }
    else{
        return (a*power(a, b-1, M))%M;
    }
}


int permute(int n, int r, int M){
    long long int temp1=1, temp2=1, ans1=1;
    for(int i=1; i<=n; i++){
        ans1 = (ans1*i)%M;
    }
    for(int i=1; i<=r; i++){
        temp1=(temp1*i)%M;
    }
    for(int i=1; i<=(n-r); i++){
        temp2 = (temp2*i)%M;
    }
    return ((long long)ans1*power((temp1*temp2)%M, M-2, M))%M;
}



int main() {
    int T, N, M;
    cin >> T;   
    while(T--){
        cin >> N >> M;
        if(N==0){
            cout << 0 << endl;
            continue;
        }
        else if(M==0){
            cout << 1 << endl;
            continue;
        }
        cout << permute(N+M-1, N, mod) << endl;
    }
    return 0;
}