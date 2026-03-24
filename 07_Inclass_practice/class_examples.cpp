#include <iostream>

class Engine{
private:
    float size;

public:
    Engine() :size(0.0f){}
    Engine(float s) : size(s){}
    float getSize() const 
    {return size;}

    void setSize(float s) 
    {size = s;}
};


class Car{
private:
    std::string brand;
    Engine engine;   

public:
    // constructors
    Car() : brand(""),engine(){}
    Car(const std::string& b, float s) : brand(b), engine(s){}

    // accessors
    std::string getBrand() const 
    {return brand;}

    float getEngineSize() const 
    {return engine.getSize();}

    // mutators
    void setBrand(const std::string& b) 
    {brand = b;}

    void setEngineSize(float s) 
    {engine.setSize(s);}

    // member print function
    void print() const 
        {std::cout << "Brand: " << brand << "\n";
        std::cout << "Engine size: " << engine.getSize() << "\n";}
};

int main(){
    std::cout << std::endl;

    Car c1;
    c1.setBrand("Tesla");
    c1.setEngineSize(2.5f);
    c1.print();
    std::cout << std::endl;


    Car c2("Toyota", 1.8f);
    c2.print();

    
    std::cout << std::endl;
    return 0;
}