#include<iostream>
#include<math.h>

int factorial(int);

int main(){

    int order;
    order = 6;
    double total;
    bool negativeDerivative;
    negativeDerivative = false;
    total = cos(M_PI/4);
    for(int count = 1; count <= order; count++){
        if(count % 4 == 1){
            negativeDerivative = true;
        }
        if(count % 4 == 3){
            negativeDerivative = false;
        }
        if(count % 2 == 0){
            if(negativeDerivative == true){
                total -= pow((M_PI/12), count) * cos(M_PI/4) / factorial(count);
            }
            else{
                total += pow((M_PI/12), count) * cos(M_PI/4) / factorial(count);
            }
        }
        if(count % 2 == 1){
            if(negativeDerivative == true){
                total -= pow((M_PI/12), count) * sin(M_PI/4) / factorial(count);
            }else{
                total += pow((M_PI/12), count) * sin(M_PI/4) / factorial(count);
            }
        }
        std::cout << "Total after " << count << " loops: " << total << std::endl;
    }

    return 0;
}

int factorial(int value){
    if(value == 0){
        return 1;
    }
    return value * factorial(value - 1);
}