#pragma once

#include "IteratorInterface.h"

class Iterator : public IteratorInterface
{
    private:
        std::list<Item> _bucket;
    public:
        virtual void iterateItems() override;
        Iterator(std::list<Item> bucket);
};
