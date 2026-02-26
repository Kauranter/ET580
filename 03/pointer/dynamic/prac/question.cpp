// s. trowbridge 2024
#include <iostream>

class Family {
private:
    std::string surname;
public:
    Family(): surname("noname")
    {}
    Family(std::string n): surname(n)
    {}       
    void print()
    {
        std::cout << surname << "\n";
    }
};

int main() {
    std::cout << std::endl;

    Family f1;
    Family f2("Smith");
    f1.print();
    f2.print();    

    std::cout << std::endl;
    return 0;
}
