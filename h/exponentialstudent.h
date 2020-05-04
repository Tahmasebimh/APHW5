//
// Created by Hossein on 5/4/2020.
//

#ifndef APHW5_EXPONENTIALSTUDENT_H
#define APHW5_EXPONENTIALSTUDENT_H


#include "student.h"

class ExponentialStudent : public Student{
public:
    double pdf(double input) const override;
    ExponentialStudent(std::string name, double lambda);
    ExponentialStudent();

    double operator()(double) const ;
    double operator()(double, double) const ;

private:
    double lambda{0.07};
};


#endif //APHW5_EXPONENTIALSTUDENT_H
