#include <iostream>

int fn_Fib(int i_N);

int main(){
    int i_Num = 4;
    std::cout<< fn_Fib(i_Num);

    return 0;
}

int fn_Fib(int i_N){
    if(i_N == 0 || i_N == 1){
        return i_N;
    }
    return fn_Fib(i_N-1) + fn_Fib(i_N-2);
}
