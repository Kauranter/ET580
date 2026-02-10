//Anterpreet kaur
//Feb10th, 2026 
//01_core_concepts_practice:


#include <iostream>

class Car{

private:
    std::string brand;
    int cost;
public:
    Car(): brand("nobrand"), cost(0) {}
    Car(std::string b , int c ): brand(b), cost(c) {}
    std::string getBrand() {return brand;}
    int getCost (){return cost;}
    void setBrand (std::string b){brand = b;}
    void setCost(int c ){cost = c;}

};

void print (Car & c){
    std::cout<< c.getBrand()<<" "<< c.getCost() <<std::endl;
}

int main(){
std::cout<<std::endl;

Car c;
//c.brand = "Tesla";
//c.cost = (75000);
c.setBrand("Tesla");
c.setCost(75000);
std::cout<<c.getBrand()<<"$"<< c.getCost()<< "\n";//std::cout << c.brand << " $" << c.cost << "\n";

Car c2{"BMW", 50000};
print(c2);


std::cout << std::endl;
    
return 0;

}