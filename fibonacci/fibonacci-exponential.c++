#include <iostream>
#include <assert.h>
using namespace std;

int fibonacci(int n){
    assert(n >= 0);

    if(n == 0){
        return 0;
    } else if(n == 1){
        return 1;
        } else {
            return fibonacci(n-1) + fibonacci(n-2); 
        }
}


int main() {
    int n = 0;
    cout << " " << endl;
    cout << "Ingrese el n-esimo numero de Fibonacci a calcular: " << endl;
    cin >> n;

    int res = fibonacci(n);
    
    cout << "El valor del " << n << "-esimo numero de Fibonacci es " << res << endl;
    return 0;
}