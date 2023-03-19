#include <iostream>


enum Codes {
    Continue = 100,  
    OK = 200, 
    Created = 201,
    Accepted = 202, 
    Bad_Request = 400,
    Unauthorized = 401, 
    Not_Found = 404,
    Method_Not_Allowed = 405,
    Internal_Server_Error = 500,
    Not_Implemented = 501,
    Bad_Gateway = 502
    
};


int main() {
    int x = 1;

    std::cin >> x;
    while (x != 0) {
        switch (x) 
        {
            case Codes::Continue: 
                std::cout << "Continue" << std::endl;
                break;
            case Codes::OK: 
                std::cout << "OK" << std::endl;
                break;
            case Codes::Created: 
                std::cout << "Created" << std::endl;
                break;
            case Codes::Accepted: 
                std::cout << "Accepted" << std::endl;
                break;
            case Codes::Bad_Request: 
                std::cout << "Bad Request" << std::endl;
                break;
            case Codes::Unauthorized: 
                std::cout << "Unauthorized" << std::endl;
                break;
            case Codes::Not_Found: 
                std::cout << "Not Found" << std::endl;
                break;
            case Codes::Method_Not_Allowed:
                std::cout << "Method Not Allowed" << std::endl;
                break;
            case Codes::Internal_Server_Error: 
                std::cout << "Internal Server Error" << std::endl;
                break;
            case Codes::Not_Implemented: 
                std::cout << "Not Implemented" << std::endl;
                break;
            case Codes::Bad_Gateway: 
                std::cout << "Bad Gateway" << std::endl;
                break;
        }
        std::cin >> x;
    } 

    return 0;
}