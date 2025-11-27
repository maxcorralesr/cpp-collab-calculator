//
// Created by maxco on 11/26/2025.
//
#include "operation.h"
#include <iostream>
using namespace std;

double operation::add(double a, double b) {
    return a + b;
}

double operation::subtract(double a, double b) {
    return a - b;
}

double operation::multiply(double a, double b) {
    return a * b;
}

double operation::divide(double a, double b) {
    if (b == 0) {
        cout << "Error: División por cero\n";
        return 0;
    }
    return a / b;
}

