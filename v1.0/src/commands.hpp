// This file will store our commands
#include        <iostream>
#include         <fstream>
#include          <string>
#include           <cmath>
#include          <cstdio>

// str_ext() :- will not extract the string
std::string str_ext(std::string str1, std::string str2);

int __exec__(std::string command){// This function will execute our commands in an order
    if (command.find("exit") != -1){
        // user wants to exit the system
        exit ( 3 ); // exiting with code 3
        return 1;
    }
    // comment
    else if (command.find("ignore") != -1){
        // user wants to exit the system
        return 1;
    }
    else if (command.find("comment") != -1){
        // user wants to exit the system
        return 1;
    }
    else if (command.find("//") != -1){
        // user wants to exit the system
        return 1;
    }
    else if (command.find("#") != -1){
        // user wants to exit the system
        return 1;
    }
    // print
    else if (command.find("print") != -1){
        // user wants to exit the system
        // extracting print
        std::cout<<str_ext(command, "print ")<<std::endl;
        return 1;
    }
    // sys
    else if (command.find("sys") != -1){
        // user wants to exit the system
        // extracting print
        std::system(str_ext(command, "sys ").c_str());
        return 1;
    }
    // cpp
    else if (command.find("cpp.") != -1){
        // user wants to exit the system
        // extracting print
        std::string cpp_func = str_ext(command, "sys ");

        // cpp __exit__() function
        if (cpp_func.find("__exec__()->") != -1){
            std::string cpp_exec_command = str_ext(cpp_func, "__exec__()->");
            __exec__(cpp_exec_command);
        }
        return 1;
    }
    // errors
    else {
        std::cout<<"ERROR Found <invalid command> [" + command + "], exception not found\n";
        return 0;
    }
}



std::string str_ext(std::string str1, std::string str2){
    // checking weather str1 has str2 or not
    if (str1.find(str2) != -1){
        return str1.substr(str1.find(str2) + str2.length());
    }
    return "FOPEN_FALSE";
}