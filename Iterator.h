/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include <list>
#include "Item.h"
#include "IteratorInterface.h"

class Iterator : public IteratorInterface
{
    private:
        std::list<Item> _bucket;
    public:
        virtual void iterateItems() override;
        Iterator(std::list<Item> bucket);
};
