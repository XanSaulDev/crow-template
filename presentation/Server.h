//
// Created by saul9 on 18/01/2024.
//

#ifndef CROW_TEMPLATE_SERVER_H
#define CROW_TEMPLATE_SERVER_H

#include "crow.h"
#include "AppRoutes.h"

class Server {
public:
    static void start(int port){
        crow::SimpleApp app;
        AppRoutes::routes(app);
        app.port(port).run();
    }
};



#endif //CROW_TEMPLATE_SERVER_H
