#ifndef SERVERCLI_H
#define SERVERCLI_H
#include<iostream>
#include<string>
#include<regex>
#include "Commands.h"
#include "Types.h"
#include "Tables.h"
#include "Server.h"


class ServerCLI{
public:



private:
    Server s;
    void parser(std::string command){
        std::regex ws_re("\\s+");
        std::vector<std::string> result{
        std::sregex_token_iterator(command.begin(), command.end(), ws_re, -1), {}
        };
        this->lexer(result);
    }
    void lexer(std::vector<std::string> token){
        if(token[0] == SADD){
            this->setElementByKey(this->s.getStringTable(), token[1],token[2]);
        }else if(token[0] == LADD){
            this->setElementByKey(this->s.getListTable(), token[1], token[2]);
        }else if(token[0] == HADD){
            this->setElementByKey(this->s.getHashTable(), token[1], token[2]);
        }
    }
    template<typename T>
    T getElementByKey(T table, std::string key){
        return this->s.getElementByKey(table, key);
    }

    template <typename T, typename R>
    void setElementByKey(T table, std::string key, R value){
        this->s.setElementByKey(table, key, value);
    }
};



#endif