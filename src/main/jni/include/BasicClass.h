#include <string>

class BasicClass {
    std::string greeting;

public:
    BasicClass() {
        greeting = "Hello from BasicClass";
    }

    std::string Hello() {
        return greeting;
    }
};
