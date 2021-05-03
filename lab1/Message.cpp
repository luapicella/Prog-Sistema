//
// Created by luigi on 17/04/21.
//

#include <string>
#include "Message.h"
#include <iostream>
#include "DurationLogger.h"


#ifdef DEBUG
constexpr bool debug = true;
#else
constexpr bool debug = false;
#endif

#ifdef TIMELOGGER
constexpr bool timeLogger = true;
#else
constexpr bool timeLogger = false;
#endif

int Message::id_counter = 0;
int Message::alloc_counter = 0;

Message::Message(){
    this->id = -1;
    this->size = 0;
    this->data = nullptr;
    if constexpr (debug) std::cout<<"Costruttore di default di "<<this->id<<std::endl;
};

Message::Message(int n){
    this->size = n;
    this->data = mkMessage(n);
    if constexpr (debug) alloc_counter++;
    this->id = this->id_counter++;
    if constexpr (debug) std::cout<<"Costruttore di "<<this->id<<std::endl;

};

Message::~Message()
{
    if constexpr (debug) std::cout<<"Distruttore di "<<this->id<< std::endl;
    if constexpr (debug) alloc_counter--;
    delete [] this->data;
}

Message::Message(const Message &source)
{
    this->size = source.size;
    this->data = new char[size+1];
    std::copy(source.data,source.data+source.size,this->data);
    this->id = id_counter++;
    if constexpr (debug) std::cout<<"Costruttore di copia di "<<this->id<<" a partire da "<<source.id<<std::endl;
}

Message::Message(Message &&source){
    this->id = source.id;
    this->size = source.size;
    this->data = source.data;
    source.data = nullptr;
    if constexpr (debug) std::cout<<"Costruttore di movimento di "<<this->id<<" a partire da "<<source.id<<std::endl;
}

Message &Message::operator=(const Message &source)
{
    if constexpr(timeLogger) DurationLogger tmp = DurationLogger("copy()");
    if (this!=&source){
        delete [] this->data;
        this->data = nullptr;
        this->size = source.size;
        this->data = new char[size];
        std::copy(source.data,source.data+size,this->data);
        this->id = id_counter++;
    }
    if constexpr (debug) std::cout<<"Operatore di assegnazione di "<<this->id<<" a partire da "<<source.id<<std::endl;
    return *this;
}

Message &Message::operator=(Message&& source){
    if constexpr(timeLogger) DurationLogger tmp = DurationLogger("move()");
    if (this!=&source){
        delete [] this->data;
        this->size = source.size;
        this->data = source.data;
        source.data = nullptr;
        this->id = id_counter++;
    }
    if constexpr (debug) std::cout<<"Operatore di assegnazione e movimento di "<<this->id<<" a partire da "<<source.id<<std::endl;
    return *this;
}

long Message::get_id() const {
    return this->id;
}

int Message::get_size() const {
    return this->size;
}

char* Message::get_data() const {
    return this->data;
}

char* Message::mkMessage(int n)
{
    std::string vowels = "aeiou";
    std::string consonants = "bcdfghlmnpqrstvz";
    char* m = new char[n+1];
    for(int i =0; i<n; i++){
        m[i]= i%2 ? vowels[rand()%vowels.size()] :
              consonants[rand()%consonants.size()];
    }
    m[n] = 0;
    return m;
}

std::ostream& operator<<(std::ostream& out, const Message& m){
    out << "ID: " << m.get_id() << ", SIZE: " << m.get_size() << ", DATA:  " << m.get_data();
    return out;
}

