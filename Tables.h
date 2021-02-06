#ifndef TABLES_H
#define TABLES_H
#include <iostream>
#include "Types.h"

template <typename T>
class Table{
    virtual T getElementByKey(std::string key) = 0;
    virtual void setElementByKey(std::string key, T value) = 0;
};

class StringTable:public Table<StringValue>{
public:
    StringTable(){}
    StringTable(StringTableType table){
        this->table = table;
    }
    StringValue getElementByKey(std::string key){
        return this->table[key];
    }
    void setElementByKey(std::string key, StringValue value){
        this->table[key] = value;
    }
private:
    StringTableType table;
};

class ListTable:public Table<StringVector>{
public:
    ListTable(){}
    ListTable(ListTableType table){
        this->table = table;
    }
    StringVector getElementByKey(std::string key){
        return this->table[key];
    }
    void setElementByKey(std::string key, StringVector value){
        this->table[key] = value;
    }

private:
    ListTableType table;
};

class HashTable:public Table<StringTableType>{
public:
    HashTable(){}
    HashTable(HashesTable table){
        this->table = table;
    }
    StringTableType getElementByKey(std::string key){
        return this->table[key];
    }
    void setElementByKey(std::string key, StringTableType value){
        this->table[key] = value;
    }

private:
    HashesTable table;
};

#endif