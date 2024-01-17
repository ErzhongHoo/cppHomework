#include <iostream>
using namespace std;

int reverseN(int N){
    int revN=0;
    while(N!=0){
        revN = (revN*10) + (N%10);
        N = N/10;
    }
    return revN;
}

int symmetry(int i){
    if(i==reverseN(i)){
        return 0;
    }
}

int main(){
    for(int i=0; i<=256; i++){
        if(i*i == reverseN(i)){
            cout << i << endl;
        }
    }
    return 0;
}