#include <iostream>
#include <string>
#include <type_traits>
#include <sstream>
#include <iterator>
#include <algorithm>
#include <exception>
#include <utility>
#include <ios>
#include <fstream>
#include <tuple>
#include "CSVParser.h"

int main(int argc, char* argv[]) {
    std::ifstream file("gogogo.csv");
    CSVParser<std::string, std::string, float> parser(file, 0);

    for (std::tuple<std::string, std::string, float> rs : parser) {
         std::cout << rs << std::endl;
    }

    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

    return 0;
}