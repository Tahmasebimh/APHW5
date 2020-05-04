#include <iostream>
#include <vector>
#include <bits/unique_ptr.h>
#include "../h/apqueue.h"
#include "../h/normalstudent.h"
#include "../h/exponentialstudent.h"
#include "../h/apmidterm.h"
#include "gtest/gtest.h"

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    std::cout << "RUNNING TESTS ..." << std::endl;
    int ret{RUN_ALL_TESTS()};
    std::cout << "Here!"<<std::endl;
    if (!ret)
        std::cout << "<<<SUCCESS>>>" << std::endl;
    else
        std::cout << "FAILED" << std::endl;

    std::cout << "Hello World!!" << std::endl;
    return 0;
}
