#pragma once

#include "ClientInterface.h"

class Client : public ClientInterface
{
    public:
        virtual void addItemToTheBucket(Item item) override;
        virtual std::list<Item> getBucket() override;
};
