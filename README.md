# Terminal Project

A custom terminal application built in C, designed to provide basic shell functionalities such as executing commands, managing paths, and handling built-in functions.

## Features
- **Command Execution**: Supports standard command-line commands.
- **Environment Handling**: Includes commands like `cd`, `env`, and `exit`.
- **Path Management**: Resolves command paths and manages environment variables.
- **File Execution**: Allows command execution from files.
- **String and Memory Operations**: Custom implementations for string manipulation and memory handling functions.

## Setup
1. Clone the repository:
  ```shell
   git clone https://github.com/MohamedYehia20m/terminal-project.git
  ```
2. Compile the source code:
  ```shell
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
  ```
3. Run the shell:
  ```shell
  ./hsh  
  ```
## Usage

Once the shell is running, you can enter commands and execute them. Here are a few examples:

- Execute an external command:

  ````shell
  $ ls -l
  ```

- Execute a built-in command:

  ````shell
  $ cd /path/to/directory
  ```

- Pipe commands:

  ````shell
  $ ls -l | grep "example"
  ```

For more information on available commands and their usage, refer to the man pages or consult the documentation.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request. Make sure to follow the project's code of conduct.

## License

This project is licensed under the [MIT License](LICENSE).



Feel free to customize and modify this template to fit your specific shell project.


