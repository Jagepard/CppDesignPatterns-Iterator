/**
 * @author  : Jagepard <jagepard@yandex.ru>
 * @license https://mit-license.org/ MIT
 */

#include "Client.h"
#include <vector>

void Client::addItemToTheBucket(Item item)
{
    _bucket.push_back(item);
}

std::vector<Item> Client::getBucket()
{
    return _bucket;
}
