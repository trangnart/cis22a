#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;

bool isPrime(int num){
    const int MAX = static_cast<int>(sqrt(num));
    for (int i=2; i <= MAX; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    ofstream outfile;
    int max_num = 104729;   

    outfile.open("primes.txt");
    for ( int i = 2; i <= max_num; i++ )
    {
        if( isPrime(i) )
            outfile << i << endl;
    }
    outfile.close();
    return 0;
}