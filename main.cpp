#include <iostream>

using std::cout; using std::cin; using std::endl;

int algorithm(int);

int main(){
    int i, j, aux;
    while(cin >> i){
        cin >> j;
        cout << i << " " << j << " " ; //<< " " << j << " ";
        aux = j;
        if(i > j){ j = i; i = aux;}
        int max = algorithm(i);
        for(;i<=j;i++){
            if(max < algorithm(i)){
                max = algorithm(i);
            }
        }
        cout << max
        <<  endl;
    }
    return 0;
}

int algorithm(int n){
    int count = 1;
    while(n >= 1){
        if(n == 1){
            break;
        }
        if(n % 2 == 0){
            n = n/2;
            count++;
        }else{
            n = (3*n)+1;
            n = n/2;
            count +=2;
        }
    }
    return count;
}
