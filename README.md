# ByteCodeInject

[![CMake](https://img.shields.io/badge/CMake-064F8C.svg?style=default&logo=CMake&logoColor=white)](https://cmake.org/)
[![C++](https://img.shields.io/badge/C++-A8B9CC.svg?style=default&logo=C%2B%2B&logoColor=black)](https://isocpp.org/)
[![YAML](https://img.shields.io/badge/YAML-CB171E.svg?style=default&logo=YAML&logoColor=white)](https://yaml.org/)

A Windows-based process injection tool that demonstrates DLL injection and process manipulation techniques.

## Overview

ByteCodeInject is a C++ project that demonstrates process injection techniques on Windows systems. It consists of two main components:
- An injector that can inject code into running processes
- A simple backdoor demonstration payload

## Features

- Process injection using shellcode
- Remote thread creation
- Process memory manipulation
- Cross-process communication
- Windows API integration

## Project Structure

```sh
└── /
    ├── backdoor.cpp      # Simple demonstration payload
    ├── injector.cpp      # Main injection implementation
    ├── CMakeLists.txt    # Build configuration
    └── build/           # Build output directory
```

## Getting Started

### Prerequisites

This project requires:
- Windows operating system
- CMake (version 3.29.2 or higher)
- C++ compiler (MSVC recommended)
- Administrator privileges (for process injection)

### Installation

1. **Clone the repository:**
    ```sh
    git clone https://github.com/Th3drata/ByteCodeInject.git
    ```

2. **Navigate to the project directory:**
    ```sh
    cd ByteCodeInject
    ```

3. **Build the project:**
    ```sh
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

### Usage

The injector requires two arguments:
1. Target process name
2. Path to the executable to inject

Example:
```sh
injector.exe notepad.exe path/to/backdoor.exe
```

### Security Notice

⚠️ **WARNING**: This tool is for educational purposes only. Unauthorized process injection may be illegal in your jurisdiction. Always obtain proper authorization before testing on any system.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- Windows API documentation
- Process injection research community 