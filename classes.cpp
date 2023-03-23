#include <iostream>

int main() {
    class City {

    private:
        // Private (encapsulated) attribute
        int finances;

    public:
        // Attribute
        int population = 0;

        // Method
        void add_resident() {
            population++;
        }
    };

    // Instantiate the object
    City myCity;


    myCity.add_resident();
    // Add 15 residents
    for(int i=0; i<=15; i++) {
        myCity.add_resident();
    }
  
    // Outputs 15
    std::cout << myCity.population;

    return 0;
}