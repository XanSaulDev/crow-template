
#include "presentation/Server.h"
#include "config/Envs.h"


int main()
{
    Envs::loadEnvFromFile("../.env");
    Server::start(Envs::getVariableToInt("PORT"));
}