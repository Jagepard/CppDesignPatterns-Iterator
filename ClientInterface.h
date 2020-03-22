/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include "Item.h"
#include <vector>

class ClientInterface
{
    public:
        std::vector<Item> bucket;
        virtual void addItemToTheBucket(Item item) = 0;
        virtual std::vector<Item> getBucket() = 0;
};
