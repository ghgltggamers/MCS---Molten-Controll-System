// This file is only for extracting the string from a file

#include        <iostream>
#include         <fstream>
#include          <string>
#include           <cmath>
#include          <cstdio>

// writting out extracter function
std::string str_extracter(std::string file_name, std::string main_string){
    // opening the file
    std::ifstream file(file_name);

    // checking weather the file can be opened or not
    if (file.is_open()){
        // file can be opened
        // reading the whole file
        std::string str_file;
        while (std::getline(file, str_file)){
            // now we will read the file line by line
            // let's check weather the current line innxludes the character we really needed.
            if (str_file.find(main_string) != -1){
                // it means we can find the main charcater
                std::string fetch_string = str_file.substr(str_file.find(main_string) + main_string.length());
                /*
                    Let's simplify the calculations we have done here

                    Let suppose we has a string "hellow world"
                    now i want to only get world from the string so what can i do
                    i can use substr() method of string which helps us to fetch pr extract the string we want and it basically asks for range which should be integer showing from starting point of extraction and ending point of extraction.
                    if we knew the length of hellow then we can just provide starting point and the substr will autofetch the rest of the string.
                    so we can use "hellow ".length() method for getting the length and then substr will return world. 

                    but what if we write " hellow world"
                    now with previous approach we will get " world" and we want "world" only
                    so what if we knew the first index of hellow ? then we can add length of hellow to it and it will run
                    which is why we used find() method and then added length() to it.

                    formulae we get:

                        -(index of string + length of string) + total length of line
                        ----------------------------------
                                        (1)

                        with this formulae you can easily fetch substrings from anywhere in C++
                */
               return fetch_string;
            }
            else {
                return "NFOUND"; // here NFOUND is a flag used to determine Not Found
                // we will continue the character finding
                continue;
            }
        }
    }
    else {
        // file can not be opened so we will throw an startup error
        return "FOPEN_FALSE"; // FOPEN_FALSE is a flag for us which we are returning for saying our cpp program that File Open Was False
    }
    return "PROCESSING_FAILED";
}