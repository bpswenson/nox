#include <iostream>
#include "math/vectors.h"


using namespace nox;

int main() {

    vec2d myVec = {2.3, 4.1};
    vec2d myOtherVec = {2.2, 1.2};
    vec2d sum = myVec + myOtherVec;
    std::cout << sum.x << ", " << sum.y << "\n";

    std::cout << "Hello, World!" << std::endl;
    return 0;
}