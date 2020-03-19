/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "Item.h"

Item::Item(std::string name, int price, std::string description)
{
    _description = description;
    _price = price;
    _name = name;
}

std::string Item::getName()
{
    return _name;
}

std::string Item::getDescription()
{
    return _description;
}

int Item::getPrice()
{
    return _price;
}
