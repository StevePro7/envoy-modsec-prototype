#include <iostream>
#include "envoy/source/exe/http_filter.h"

int main(int argc, char** argv) {

    Foo f;
    int x = f.GetAge();
    std::cout << "Age = " << x << std::endl;

    std::string text = "another build file..!!";

    std::cout << text << std::endl;
    return 0;
}