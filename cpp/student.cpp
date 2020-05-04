//
// Created by Hossein on 5/4/2020.
//

#include <cmath>
#include "../h/student.h"

double Student::integrator(double a, double b, double step_size) const {
    double sum{};
    while (a < b){
        sum += (((pdf(a) + pdf(a + step_size)) * step_size) / 2);
        a += step_size;
    }
    return sum;
}

double Student::between(double a, double b) const {
    return integrator(a, b);
}
