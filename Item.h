#pragma once

#include <string>

class Item
{
    private:
        std::string _name;
        int _price;
        std::string _description;
    public:
        Item(std::string name, int price, std::string description);
};

