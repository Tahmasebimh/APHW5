//
// Created by Hossein on 5/4/2020.
//

#ifndef APHW5_STUDENT_H
#define APHW5_STUDENT_H


#include <string>

class Student {

protected:
    std::string name{"Hossein"};
public:
    virtual double pdf(double input) const = 0;
    double integrator(double a, double b, double step_size = 0.001) const ;
    double between(double a, double b) const;
};


#endif //APHW5_STUDENT_H
