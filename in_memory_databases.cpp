#include <iostream>
#include "Types.h"

template <typename T, typename R>
class Table{
public:
    Table(){}
    Table(R table){
        this->table = table;
    }
    T getElementByKey(T key){
        return this->table[key];
    }
    void setElementByKey(std::string key, T value){
        this->table[key] = value;
    }
private:
    R table;
};


int main()
{   
    
}
