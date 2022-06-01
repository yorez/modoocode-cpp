#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream in("test.txt");
    char buf[100];


    if(!in.is_open()) {
        std::cout << "can not find file" << std::endl;
    }

    while (in) {
        in.getline(buf, 100);
        std::cout << buf << std::endl;
    }
    return 0;
}
