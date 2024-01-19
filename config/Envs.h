//
// Created by saul9 on 18/01/2024.
//

#ifndef CROW_TEMPLATE_ENVS_H
#define CROW_TEMPLATE_ENVS_H

#include <fstream>
#include <cstdlib>

class EnvVarLoadError : public std::runtime_error {
public:
    EnvVarLoadError(const std::string& message) : std::runtime_error(message) {}
};


class Envs{

public:
    static void loadEnvFromFile(const std::string& filePath) {
        std::ifstream file(filePath);
        std::string line;

        while (std::getline(file, line)) {

            size_t delimiterPos = line.find('=');
            if (delimiterPos != std::string::npos) {
                std::string key = line.substr(0, delimiterPos);
                std::string value = line.substr(delimiterPos + 1);


                std::string envVar = key + "=" + value;
                putenv(const_cast<char*>(envVar.c_str()));
            }
        }
    }

    static std::string getVariableToString(const std::string& key) {
        const char* value = std::getenv(key.c_str());
        if (value == nullptr) {
            throw EnvVarLoadError("Error loading environment variable: " + key);
        }

        return std::string(value);
    }



    static int getVariableToInt(const std::string& key) {
        const std::string value = Envs::getVariableToString(key);
        try {

            return std::stoi(value);
        } catch (const std::invalid_argument& e) {
            throw EnvVarLoadError("Error converting environment variable to integer: " + key);

        } catch (const std::out_of_range& e) {
            throw EnvVarLoadError("Value out of range when converting environment variable to integer: " + key);
        }
    }

};

#endif //CROW_TEMPLATE_ENVS_H
