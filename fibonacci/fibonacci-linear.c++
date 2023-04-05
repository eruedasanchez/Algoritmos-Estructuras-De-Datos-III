#include <iostream>
#include <assert.h>
using namespace std;

/* Algoritmo recursivo + memoria (re utilizar) */

int memoria[100];

int fibonacciLinear(int n){
    int fib = -1;
    
    if(memoria[n] != -1){
        /* El numero de Fibonacci ya se encuentra calculado */
        return memoria[n];
    }
    
    if(n == 0){
        fib = 0;
    } else if(n == 1){
        fib = 1;
    } else {
        fib = fibonacciLinear(n-1) + fibonacciLinear(n-2);
    }

    memoria[n] = fib;
    return fib;
}

int main() {
    int n = 0;
    cout << " " << endl;
    cout << "Ingrese el n-esimo numero de Fibonacci a calcular: " << endl;
    cin >> n;

    for(int k = 0; k < n; k++){
        memoria[k] = -1;
    }
    int res = fibonacciLinear(n);
    
    cout << "El valor del " << n << "-esimo numero de Fibonacci es " << res << endl;
    return 0;
}


