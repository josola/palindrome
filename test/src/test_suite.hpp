#ifndef TEST_SUITE_HPP
#define TEST_SUITE_HPP

#include <string>
#include <vector>
#include <iostream>


class Test {
public:
    Test(std::string name) : name(name) {};
    virtual void run() = 0;
private:
    std::string name;
};

class TestSuite {
public:
    void add(Test* test);
    void run();
private:
    std::vector<Test*> tests;
};

#endif // TEST_SUITE_HPP
