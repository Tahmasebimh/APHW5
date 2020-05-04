//
// Created by Hossein on 5/4/2020.
//

#ifndef APHW5_NORMALSTUDENT_H
#define APHW5_NORMALSTUDENT_H


#include "student.h"

class NormalStudent : public Student {

public:
    NormalStudent(std::string name, double mean, double std);

    NormalStudent();

    double pdf(double input) const override;


    double operator()(double x) const;
    double operator()(double, double) const;

private:
    double mean = 12;
    double std = 2;
};


#endif //APHW5_NORMALSTUDENT_H
