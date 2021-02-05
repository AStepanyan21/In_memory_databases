#ifndef TYPES_H
#define TYPES_H
#include <iostream>
#include <map>
#include <vector>

using StringValue = std::string;
using StringTableType = std::map<std::string, StringValue>;

using StringVector = std::vector<std::string>;
using ListTableType = std::map<std::string, StringVector>;

using Hashes = std::map<std::string, StringTableType>


#endif