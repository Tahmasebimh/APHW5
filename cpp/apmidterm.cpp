//
// Created by Hossein on 5/4/2020.
//
#include <fstream>
#include <sstream>
#include <iostream>
#include "../h/apmidterm.h"

std::vector<std::unique_ptr<Student>> getData(const char* filename){
//    std::fstream fin;
//    std::string line;
//    std::string word;
//    fin.open(filename, std::ios::in);
//    std::vector<std::vector<double>> newData;
//    while (std::getline(fin, line)) {
//        std::vector<double> vector;
//        std::stringstream s(line);
//        while (std::getline(s, word, ',')) {
//            std::cout << "Word is : " << word << std::endl;
//            vector.push_back(atof(word.c_str()));
//        }
//        newData.push_back(vector);
//    }
    return std::vector<std::unique_ptr<Student>>();
}