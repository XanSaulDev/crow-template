//
// Created by saul9 on 18/01/2024.
//

#ifndef CROW_TEMPLATE_HELLO_WORLD_ROUTES_H
#define CROW_TEMPLATE_HELLO_WORLD_ROUTES_H

#include "crow.h"
#include "hello-world.controller.h"

class HelloWorldRoutes {

public:

    static void routes(crow::SimpleApp& app) {

        CROW_ROUTE(app, "/hello-world").methods("GET"_method)(&HelloWorldController::helloWorld);

    }
};





#endif //CROW_TEMPLATE_HELLO_WORLD_ROUTES_H
