/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "Client.h"

void Client::addItemToTheBucket(Item item)
{
    _bucket.push_back(item);
}

std::list<Item> Client::getBucket()
{
    return _bucket;
}
