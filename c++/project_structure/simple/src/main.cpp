#include <iostream>
#include "logger/logger.hpp"
#include "inventory/inventory.hpp"

int main() {
    Logger::init();
    std::cout << "Hello World!" << std::endl;

    const stock::Inventory inventory("Stock123");
    inventory.display();
}
