#include <iostream>
#include "Iterator.h"
#include "Client.h"

int main()
{
    Client client;

    //client.addItemToTheBucket(Item("Колготки", 150, "штопаные"));
    //client.addItemToTheBucket(Item("Мясо", 250, "тухлое"));
    //client.addItemToTheBucket(Item("Батон", 40, ""));

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
    std::cout << "Hello World!\n";
}

Iterator::Iterator(std::list<Item> bucket)
{
    _bucket = bucket;
}
