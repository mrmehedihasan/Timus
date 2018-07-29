#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int prime[1000001];


void sieve(int t){
    bool primes[t+1];
    
    for(int i=0; i<t+1; i++){primes[i]=true;}
    for(int i=2; i<=sqrt(t); i++){
        for(int j=2; i*j<=t; j++){
            primes[i*j] = false;
        }
    }
    int count = 1;
    for(int i=2; i<=t; i++){
        if(primes[i]){
            prime[count++] = i;
        }
    }

}

int main(){
    sieve(1000001);
    int t;
    scanf("%d", &t);
    while(t--){
        int p;
        cin>>p;
        cout << prime[p] << endl;
    }
    //cout << primes[0] << endl;
    return 0;
}
