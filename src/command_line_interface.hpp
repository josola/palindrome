#include <string>

class CommandLineInterface {
public:
    CommandLineInterface(int argc, char **argv) : argc_(argc), argv_(argv) {}
    int argc() const;
    char **argv() const;
    void say_word_is_palindrome(const std::string &word) const;
    void say_word_is_not_palindrome(const std::string &word) const;
private:
    int argc_;
    char **argv_;
};

class CLIParser {
public:
    CLIParser(CommandLineInterface &cli) : cli_(cli) {}
    std::string parse();
private:
    CommandLineInterface &cli_;
};
