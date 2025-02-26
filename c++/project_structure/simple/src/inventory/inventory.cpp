#include "inventory.hpp"

#include <iostream>
#include <utility>

namespace stock {
    Inventory::Inventory(std::string stock): stock(std::move(stock)) {}

    void Inventory::display() const {
        std::cout << "Stock: " << stock << std::endl;
        std::cout << "Inventory:\n Product 1, Product 2, Product 3\n";
    }

}