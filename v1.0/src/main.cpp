/*
    Copyright (c) ghgltggamer 2024
    Written by ghgltggamer
    MCS - Molten Controll System (A System Controll program) OpenSource + Completly safe to use and free for ever
*/

// Hi, i am ghgltggamer and i am writting this software for testing my C++ programming skills and for developing a CLI based powerfull tool for managing the system in a next level controll

// source
// In every C++ file we need to include some headerfiles so here are all of those which we are going to use

#include        <iostream>
#include         <fstream>
#include          <string>
#include           <cmath>
#include          <cstdio>

// custom headers
#include          "extensions.hpp"
#include          "commands.hpp"


// now let's define the main function for CLI startup
int main(int argc, char * argv[]){
    
    // let's print the startup message for boot
    std::string startup_message = str_extracter("boot/boot.mcsl", "startup_message:");
    std::cout<<startup_message<<std::endl<<std::endl;

    // initalising the agent
    std::string user_agent = str_extracter("boot/user-agent.mcsl", "user_agent:");

    // creating an infinite loop
    int lines = 1; // total lines

    std::string command;// storing our current command

    while (1){ // This loop will run infinite times
        std::cout<<user_agent<<": ";
        // asking for commands
        std::getline(std::cin, command); // inputing whole commands
        // execute the commands
        __exec__(command);
    }

    // let's return 0 for saying that everything worked fine
    return 0;
}