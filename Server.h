#ifndef SERVER_H
#define SERVER_H
#include <iostream>
#include "Tables.h"


class Server{
public:
    Server(){};
    Server(StringTable s_table, ListTable l_table, HashTable h_table){
        this->s_table = s_table;
        this->l_table = l_table;
        this->h_table = h_table;
    }
    template <typename T, typename R>
    void setElementByKey(T table, std::string key, R value){
        table.setElementByKey(key, value);
    }

    template <typename T, typename R>
    R getElementByKey(T table, std::string key){
        return table.getElementByKey(key);
    }

    StringTable getStringTable(){
        return this->s_table;
    }

    ListTable getListTable(){
        return this->l_table;
    }

    HashTable getHashTable(){
        return this->h_table;
    }
private:
    StringTable s_table;
    ListTable l_table;
    HashTable h_table;
};


#endif