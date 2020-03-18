#include "Item.h"

Item::Item(std::string name, int price, std::string description)
{
    _description = description;
    _price = price;
    _name = name;
}
