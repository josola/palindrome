#include "test_suite.hpp"

void TestSuite::add(Test* test) { tests.push_back(test); };

void TestSuite::run() {
    for (auto test : tests) {
        test->run();
    }
};
