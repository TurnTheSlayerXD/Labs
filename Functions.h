//
// Created by Professional on 13.02.2023.
//

#ifndef LAB1_FUNCTIONS_H
#define LAB1_FUNCTIONS_H

struct Circle{
    double radius;
    double x_coordinate;
    double y_coordinate;
};
struct Matrix{
    double **arr;
    unsigned int numOfStripes;
    unsigned int numOfColumns;
};

void fuu3(unsigned int *a,unsigned int *b){
    if(*a > *b){
        *a = *a - *a % *b;
    }else{
        *b = *b - *b % *a;
    }
}

void fuu1(int &a,int &b){
    if(a > b){
        a = a - a % b;
    }else{
        b = b - b % a;
    }
}

void fuu5(double *a){
    if(*a == 0){
        return;
    }
    *a = 1/(*a);
}

void fuu5(double &a){
    if(a == 0){
        return;
    }
    a = 1/a;
}

void fuu11(Circle *circle, double deduction){
    if(circle->radius - deduction < 0){
        return;
    }
    else{
        circle->radius -= deduction;
    }
}

void fuu11(Circle &circle, double deduction){
    if(circle.radius - deduction < 0){
        return;
    }
    else{
        circle.radius -= deduction;
    }
}


void fuu16(Matrix *matrix, unsigned int num1, unsigned int num2){
    if(num1 >= matrix->numOfStripes || num2 >= matrix->numOfStripes){
        return;
    }
    double buf;
    for(int i = 0; i < matrix->numOfColumns; i++){
        buf = matrix->arr[num1][i];
        matrix->arr[num1][i] = matrix->arr[num2][i];
        matrix->arr[num2][i] = buf;
    }
}








#endif //LAB1_FUNCTIONS_H
