/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include <iostream>
#include "Iterator.h"
#include "Client.h"
#include "Item.h"
#include <list>
#include <iterator>

int main()
{
    setlocale(LC_ALL, "Russian");
    Client client;

    client.addItemToTheBucket(Item("Колготки", 150, "штопаные"));
    client.addItemToTheBucket(Item("Мясо", 250, "тухлое"));
    client.addItemToTheBucket(Item("Батон", 40, ""));

    Iterator employee(client.getBucket());

    try
    {
        employee.iterateItems();
    }
    catch (const char* exception)
    {
        std::cerr << exception << std::endl;
    }
}

void Iterator::iterateItems()
{
    for (std::list<Item>::iterator it = _bucket.begin(); it != _bucket.end(); it++) {
        std::cout << it->getName() << " " << it->getPrice() << " " << it->getDescription() << std::endl;
    }
}

Iterator::Iterator(std::list<Item> bucket)
{
    _bucket = bucket;
}
