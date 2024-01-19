//
// Created by saul9 on 18/01/2024.
//

#ifndef CROW_TEMPLATE_HELLO_WORLD_CONTROLLER_H
#define CROW_TEMPLATE_HELLO_WORLD_CONTROLLER_H

#include "crow.h"

class HelloWorldController{

public:
    static crow::response helloWorld(){

        crow::json::wvalue helloWorld({{"message", "Hello, World!"}});

        return helloWorld;
    }

};


#endif //CROW_TEMPLATE_HELLO_WORLD_CONTROLLER_H
