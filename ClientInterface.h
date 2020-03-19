/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include "Item.h"
#include <list>

class ClientInterface
{
    public:
        std::list<Item> bucket;
        virtual void addItemToTheBucket(Item item) = 0;
        virtual std::list<Item> getBucket() = 0;
};
