#include <format>
#include <iostream>

enum Mode { encrypt, decrypt };

void employRot13(std::string& s, const int offset) {
    for (char& c : s) {
        if (isupper(c)) {
            c = (c - 'A' + offset + 26) % 26 + 'A';
        } else if (islower(c)) {
            c = ((c - 'a' + offset + 26) % 26) + 'a';
        }
    }
}

void rot13(std::string& s, const Mode m = Mode::encrypt) {
    if (m == Mode::encrypt) {
        employRot13(s, 13);
    } else {
        employRot13(s, -13);
    }
}

int main() {
    std::string s{"Hello there how is it going?"};
    rot13(s);
    std::cout << s << "\n";
    rot13(s, Mode::decrypt);
    std::cout << s;
    return 0;
}
