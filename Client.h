/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#pragma once

#include <vector>
#include "ClientInterface.h"

class Client : public ClientInterface
{
    private:
        std::vector<Item> _bucket;
    public:
        virtual void addItemToTheBucket(Item item) override;
        virtual std::vector<Item> getBucket() override;
};
