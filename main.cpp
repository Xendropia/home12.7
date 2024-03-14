#include <iostream>
#include <string>

bool IsKPeriodic(const std::string& str, int k) {
    if (k <= 0) {
        return false;
    }

    int length = str.length();
    if (length % k != 0) {
        return false;
    }

    std::string period = str.substr(0, k);
    for (int i = k; i < length; i += k) {
        if (str.substr(i, k) != period) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string str = "abcgabcgabcgabcgabcg";
    int k = 4;
    bool result = IsKPeriodic(str, k);
    std::cout << "Строка '" << str << "' " << (result ? "является" : "не является") << " кратной " << k << "." << std::endl;
    return 0;
}