/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include "ClientInterface.h"

class Client : public ClientInterface
{
    private:
        std::list<Item> _bucket;
    public:
        virtual void addItemToTheBucket(Item item) override;
        virtual std::list<Item> getBucket() override;
};
