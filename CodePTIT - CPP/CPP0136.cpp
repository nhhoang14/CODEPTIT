//https://code.ptit.edu.vn/student/question/CPP0136
//ĐẾM SỐ CÓ BA ƯỚC SỐ

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int isPrime(int n){
    if(n < 2)return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return 0;
    }
    return 1;
}

int main(){
    int test;
    cin >> test;
    while (test--)
    {
        ll n, count = 0;
        cin >> n;
        for(int i = 2; i <= sqrt(n); i++)
            if(isPrime(i))count++;
        cout << count << endl;
    }
    return 0;
}