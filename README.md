# MCS - Molten Control System Documentation

## Overview

**MCS - Molten Control System** is an open-source CLI-based system control program designed to showcase the power and versatility of C++. Our goal is to demonstrate how powerful C++ really is, promote educational content across the globe, and provide a free and safe tool for system management.

Developed by **ghgltggamer**, MCS serves as both a practical tool for system control and an educational resource for those interested in learning more about C++ and command-line interfaces. It’s completely free and open-source, ensuring accessibility and safety for all users.

## Purpose of Source Files

The source files in the MCS project are organized to provide a modular and clean structure for both functionality and ease of understanding. Here’s a brief overview of each key source file:

- **`main.cpp`**  
  This is the entry point of the application. It initializes the system, prints the startup message, and enters an infinite loop where it processes user commands. This file demonstrates basic C++ syntax and usage of standard libraries, including file operations and command-line interactions.

- **`extensions.hpp`**  
  This header file includes all the custom file extensions and dependencies required by the project. It imports standard C++ libraries and custom headers like `commands.hpp` and `str_extracter.hpp`. This file is essential for defining which external functionalities are available to the rest of the project.

- **`commands.hpp`**  
  This file contains the definitions and implementations of various commands that the MCS system can process. It includes functions for executing commands such as `print`, `sys`, and `cpp.__exec__()`. This file showcases how command processing can be implemented in C++.

- **`extensions/str_extracter.hpp`**  
  This header file provides functionality for extracting specific strings from files. It includes the `str_extracter` function, which reads a file and extracts a substring based on a specified pattern. This file is useful for demonstrating file handling and string manipulation in C++.

## Commands

The MCS system supports a variety of commands to interact with and control the system. Below is a list of available commands along with their descriptions:

- **`print <text>`**  
  Prints the specified text to the console.  
  Example usage: `print Hello, World!`

- **`sys <command>`**  
  Executes a system command.  
  Example usage: `sys ls` to list directory contents.

- **`cpp.__exec__()-><command>`**  
  Executes a C++ command within the system.  
  Example usage: `cpp.__exec__()->print Hello from CPP!`

- **`exit`**  
  Exits the MCS system.

- **`ignore`**  
  Ineffective command that does nothing.

- **`comment`**  
  Ineffective command that does nothing.

- **`//`**  
  Comment line that is ignored.

- **`#`**  
  Comment line that is ignored.

## Examples

Here are some example commands you can use with MCS:

- **Print Example:**  
  `print Welcome to MCS!`

- **System Command Example:**  
  `sys date` - Displays the current date and time.

- **C++ Command Example:**  
  `cpp.__exec__()->print Hello from C++!`

- **Exit Example:**  
  `exit` - Exits the MCS application.

## Contributing

We welcome contributions to the MCS project! If you would like to contribute, please follow these steps:

1. Fork the repository on GitHub.
2. Create a new branch for your changes.
3. Make your changes and test thoroughly.
4. Submit a pull request with a description of your changes.

Please ensure that your code adheres to the project's coding standards and includes tests for any new functionality.

For more details, visit the project repository at [GitHub Repository]([https://github.com/your-repo-link](https://github.com/ghgltggamers/MCS---Molten-Controll-System)).

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE.txt) file for details.

---

&copy; 2024 ghgltggamer. All rights reserved.
