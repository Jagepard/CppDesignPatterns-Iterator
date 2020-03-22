/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include <vector>
#include "Item.h"
#include "IteratorInterface.h"

class Iterator : public IteratorInterface
{
    private:
        std::vector<Item> _bucket;
    public:
        virtual void iterateItems() override;
        Iterator(std::vector<Item> bucket);
};
