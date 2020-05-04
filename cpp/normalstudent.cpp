//
// Created by Hossein on 5/4/2020.
//

#include <math.h>

#include <utility>
#include "../h/normalstudent.h"




double NormalStudent::pdf(double input) const {
    return ((1 / ((sqrt(2 * M_PI)) * std))
        * exp(- (1 /( (2 * pow(std, 2))) * pow((input - mean), 2))));
}

NormalStudent::NormalStudent(std::string name, double mean, double std) : mean{mean}, std{std} {
    Student::name = std::move(name);
}

double NormalStudent::operator()(double x) const {
    return pdf(x);
}

double NormalStudent::operator()(double x, double y) const {
    return between(x, y);
}

NormalStudent::NormalStudent() {}


