//
// Created by Hossein on 5/4/2020.
//

#include "../h/exponentialstudent.h"
#include <math.h>

#include <utility>


double ExponentialStudent::pdf(double input) const {
    return (lambda * (exp(-(lambda * input))));
}

ExponentialStudent::ExponentialStudent(std::string name, double lambda) : lambda{lambda} {
    this->name = std::move(name);
}

ExponentialStudent::ExponentialStudent() {}

double ExponentialStudent::operator()(double input) const {
    return pdf(input);
}

double ExponentialStudent::operator()(double x, double y) const {
    return between(x, y);
}

