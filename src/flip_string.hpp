#include <string>

class FlipString {
public:
    FlipString(const std::string &word) : word_(word) {}
    std::string word() const;
    std::string flip_word() const;
private:
    std::string word_;
};
