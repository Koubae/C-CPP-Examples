#pragma once

#include <string>

namespace stock {
    class Inventory {
    private:
        std::string stock;

    public:
        explicit Inventory(std::string stock);

        ~Inventory() = default;

        void display() const;
    };
}
