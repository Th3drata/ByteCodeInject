# Process Memory Manipulation Research Tool

This project is a research tool for studying process memory manipulation techniques. It demonstrates various methods of interacting with process memory in a controlled environment.

## ⚠️ Important Notice

This tool is provided for **educational and research purposes only**. It should only be used:
- In controlled environments
- With proper authorization
- For legitimate security research
- For learning about system internals

## Features

- Process memory analysis
- Memory allocation techniques
- Process interaction methods
- Command execution research

## Building

### Prerequisites
- Windows operating system
- CMake 3.10 or higher
- C++17 compatible compiler
- Windows SDK

### Build Steps
```bash
mkdir build
cd build
cmake ..
make
```

## Usage

The tool requires two components:

1. Main executable
2. Research module

Basic usage:
```bash
./injector <target_process> <research_module>
```

## Research Commands

The research module supports various commands for studying system behavior:

- `cmd` - Command prompt
- `notepad` - Text editor
- `calc` - Calculator
- `explorer` - File explorer
- `taskmgr` - Task manager
- `control` - Control panel
- `regedit` - Registry editor
- `msconfig` - System configuration
- `services` - Services manager
- `devmgmt` - Device manager
- `run [command]` - Execute system command

## Security Considerations

- Modern security software may detect this tool
- Use only in controlled environments
- Requires appropriate system permissions
- May trigger security alerts

## Legal Disclaimer

This tool is provided for educational purposes only. The authors are not responsible for any misuse of this software. Users are responsible for ensuring they have proper authorization before using this tool in any environment.

## Contributing

Contributions are welcome for educational and research purposes. Please ensure all contributions comply with ethical guidelines and applicable laws.

## License

This project is licensed under the MIT License - see the LICENSE file for details. 