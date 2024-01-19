//
// Created by saul9 on 18/01/2024.
//

#ifndef CROW_TEMPLATE_APPROUTES_H
#define CROW_TEMPLATE_APPROUTES_H


#include "crow.h"
#include "hello-world/hello-world.routes.h"

class AppRoutes{

public:
    static void routes(crow::SimpleApp& app){

        // routes modules

        HelloWorldRoutes::routes(app);

    }
};



#endif //CROW_TEMPLATE_APPROUTES_H
