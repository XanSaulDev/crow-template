cmake_minimum_required(VERSION 3.27)
project(crow-template)

set(CMAKE_CXX_STANDARD 17)




add_executable(crow-template main.cpp
        config/Envs.h
        presentation/hello-world/hello-world.controller.h
        presentation/hello-world/hello-world.routes.h
        presentation/AppRoutes.h
        presentation/Server.h
)

find_package(Crow CONFIG REQUIRED)
find_package(nlohmann_json CONFIG REQUIRED)
target_link_libraries(crow-template PRIVATE
        Crow::Crow
        wsock32 ws2_32
        nlohmann_json::nlohmann_json
        "-static"
)

