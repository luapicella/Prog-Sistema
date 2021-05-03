//
// Created by luigi on 17/04/21.
//

#include "MessageStore.h"


#ifdef DEBUG
constexpr bool debugMessageStore = true;
#else
constexpr bool debugMessageStore = false;
#endif

#ifdef TIMELOGGER
constexpr bool timeLogger = true;
#else
constexpr bool timeLogger = false;
#endif

MessageStore::MessageStore(int n){
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore constructor"<< std::endl;
    this->messages = new Message[n];
    this->dim = n;
    this->n = n;
}

MessageStore::~MessageStore(){
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore deconstructor"<< std::endl;
    delete [] this->messages;
}

void MessageStore::add(Message &m) {
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore add"<< std::endl;
    long newId = m.get_id();
    if (newId != -1){
        bool flag = true;
        for(auto i=0; i<this->dim && flag; i++){
            long currentId = this->messages[i].get_id();
            if (currentId == -1 || currentId == newId){
                flag = false;
                this->messages[i] = m;
            }
        }
        //if flag is true , the MessageStore is full
        if (flag){
            std::cout<<"MessageStore::MessageStore add(riallocation)"<< std::endl;
            Message *tmpMessage = new Message[this->dim + this->n];
            std::copy(this->messages,this->messages+this->dim,tmpMessage);
            //std::move(this->messages,this->messages+this->dim,tmpMessage);
            delete [] this->messages;
            this->messages = tmpMessage;
            tmpMessage = nullptr;
            this->messages[this->dim] = m;
            this->dim = this->dim + this->n;
            std::cout << "-----------FINE RIALLOCATION--------------" << std::endl;
        }
    }
    std::cout << m << std::endl;
}

std::optional<Message> MessageStore::get(long id) {
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore get"<< std::endl;
    Message tmp = Message();
    bool flag = true;
    for(auto i=0; i<this->dim && flag; i++){
        long currentId = this->messages[i].get_id();
        if (currentId == id){
            flag = false;
            tmp = this->messages[i];
        }
    }
    return tmp;
}

std::tuple<int,int> MessageStore::stats(){
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore stats"<< std::endl;
    int countValid = 0;
    int countInvalid = 0;
    for (auto i=0; i<this->dim; i++){
        if(this->messages[i].get_id() != -1)
            countValid++;
        else countInvalid++;
    }
    return std::make_tuple(countValid,countInvalid);
}

bool MessageStore::remove(long id){
    if constexpr (debugMessageStore) std::cout<<"MessageStore::MessageStore remove"<< std::endl;
    bool flag = true;
    for(auto i=0; i<this->dim && flag; i++){
        long currentId = this->messages[i].get_id();
        if (currentId == id){
            flag = false;
            this->messages[i] = Message();
        }
    }
    return !flag;
}

void MessageStore::print() {
    for(auto i=0; i<this->dim;i++)
        if (this->messages[i].get_data() != nullptr)
            std::cout<< this->messages[i]<<std::endl;
}

void MessageStore::compact() {
    int countElement = 0;
    for(auto i= 0 ; i<this->dim; i++){
        if(this->messages[i].get_id() != -1)
            countElement++;
    }
    int span = countElement % this->n;
    if (span != 0 ) span = (this->n - span) + countElement;
    else span = countElement;
    if(span < this->dim){
        Message *tmpMessage = new Message[span];
        int count = 0;
        for(auto i= 0 ; i<this->dim; i++){
            if(this->messages[i].get_id() != -1){
                tmpMessage[count++] = this->messages[i];
            }
        }
        delete [] this->messages;
        this->messages = tmpMessage;
        tmpMessage = nullptr;
        this->dim = span;
    }

}
