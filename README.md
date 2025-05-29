[![CMake](https://img.shields.io/badge/CMake-064F8C.svg?style=default&logo=CMake&logoColor=white)](https://cmake.org/)
[![C++](https://img.shields.io/badge/C++-A8B9CC.svg?style=default&logo=C%2B%2B&logoColor=black)](https://isocpp.org/)
[![YAML](https://img.shields.io/badge/YAML-CB171E.svg?style=default&logo=YAML&logoColor=white)](https://yaml.org/)

# ByteCodeInject

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

<div id="top">

<!-- HEADER STYLE: CLASSIC -->
<div align="center">

<img src="readmeai/assets/logos/purple.svg" width="30%" style="position: relative; top: 0; right: 0;" alt="Project Logo"/>

# <code>❯ REPLACE-ME</code>

<em></em>

<!-- BADGES -->
<!-- local repository, no metadata badges. -->

<em>Built with the tools and technologies:</em>

<img src="https://img.shields.io/badge/CMake-064F8C.svg?style=default&logo=CMake&logoColor=white" alt="CMake">
<img src="https://img.shields.io/badge/C-A8B9CC.svg?style=default&logo=C&logoColor=black" alt="C">
<img src="https://img.shields.io/badge/YAML-CB171E.svg?style=default&logo=YAML&logoColor=white" alt="YAML">

</div>
<br>

---

## Table of Contents

- [Table of Contents](#table-of-contents)
- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
    - [Project Index](#project-index)
- [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Installation](#installation)
    - [Usage](#usage)
    - [Testing](#testing)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

---

## Overview



---

## Features

<code>❯ REPLACE-ME</code>

---

## Project Structure

```sh
└── /
    ├── backdoor.cpp
    ├── build
    │   ├── .ninja_deps
    │   ├── .ninja_log
    │   ├── backdoor.exe
    │   ├── build.ninja
    │   ├── cmake_install.cmake
    │   ├── CMakeCache.txt
    │   ├── CMakeFiles
    │   ├── injector.exe
    │   ├── libbackdoor.dll
    │   └── libbackdoor.dll.a
    ├── CMakeLists.txt
    ├── injector.cpp
    ├── LICENSE
    └── README.md
```

### Project Index

<details open>
	<summary><b><code>/</code></b></summary>
	<!-- __root__ Submodule -->
	<details>
		<summary><b>__root__</b></summary>
		<blockquote>
			<div class='directory-path' style='padding: 8px 0; color: #666;'>
				<code><b>⦿ __root__</b></code>
			<table style='width: 100%; border-collapse: collapse;'>
			<thead>
				<tr style='background-color: #f8f9fa;'>
					<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
					<th style='text-align: left; padding: 8px;'>Summary</th>
				</tr>
			</thead>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/backdoor.cpp'>backdoor.cpp</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/CMakeLists.txt'>CMakeLists.txt</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/injector.cpp'>injector.cpp</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/LICENSE'>LICENSE</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
			</table>
		</blockquote>
	</details>
	<!-- build Submodule -->
	<details>
		<summary><b>build</b></summary>
		<blockquote>
			<div class='directory-path' style='padding: 8px 0; color: #666;'>
				<code><b>⦿ build</b></code>
			<table style='width: 100%; border-collapse: collapse;'>
			<thead>
				<tr style='background-color: #f8f9fa;'>
					<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
					<th style='text-align: left; padding: 8px;'>Summary</th>
				</tr>
			</thead>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/.ninja_deps'>.ninja_deps</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/.ninja_log'>.ninja_log</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/build.ninja'>build.ninja</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/CMakeCache.txt'>CMakeCache.txt</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/cmake_install.cmake'>cmake_install.cmake</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
				<tr style='border-bottom: 1px solid #eee;'>
					<td style='padding: 8px;'><b><a href='/build/libbackdoor.dll.a'>libbackdoor.dll.a</a></b></td>
					<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
				</tr>
			</table>
			<!-- CMakeFiles Submodule -->
			<details>
				<summary><b>CMakeFiles</b></summary>
				<blockquote>
					<div class='directory-path' style='padding: 8px 0; color: #666;'>
						<code><b>⦿ build.CMakeFiles</b></code>
					<table style='width: 100%; border-collapse: collapse;'>
					<thead>
						<tr style='background-color: #f8f9fa;'>
							<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
							<th style='text-align: left; padding: 8px;'>Summary</th>
						</tr>
					</thead>
						<tr style='border-bottom: 1px solid #eee;'>
							<td style='padding: 8px;'><b><a href='/build/CMakeFiles/cmake.check_cache'>cmake.check_cache</a></b></td>
							<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
						</tr>
						<tr style='border-bottom: 1px solid #eee;'>
							<td style='padding: 8px;'><b><a href='/build/CMakeFiles/CMakeConfigureLog.yaml'>CMakeConfigureLog.yaml</a></b></td>
							<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
						</tr>
						<tr style='border-bottom: 1px solid #eee;'>
							<td style='padding: 8px;'><b><a href='/build/CMakeFiles/rules.ninja'>rules.ninja</a></b></td>
							<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
						</tr>
						<tr style='border-bottom: 1px solid #eee;'>
							<td style='padding: 8px;'><b><a href='/build/CMakeFiles/TargetDirectories.txt'>TargetDirectories.txt</a></b></td>
							<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
						</tr>
					</table>
					<!-- 3.29.2 Submodule -->
					<details>
						<summary><b>3.29.2</b></summary>
						<blockquote>
							<div class='directory-path' style='padding: 8px 0; color: #666;'>
								<code><b>⦿ build.CMakeFiles.3.29.2</b></code>
							<table style='width: 100%; border-collapse: collapse;'>
							<thead>
								<tr style='background-color: #f8f9fa;'>
									<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
									<th style='text-align: left; padding: 8px;'>Summary</th>
								</tr>
							</thead>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeCCompiler.cmake'>CMakeCCompiler.cmake</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeCXXCompiler.cmake'>CMakeCXXCompiler.cmake</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeDetermineCompilerABI_C.bin'>CMakeDetermineCompilerABI_C.bin</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeDetermineCompilerABI_CXX.bin'>CMakeDetermineCompilerABI_CXX.bin</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeRCCompiler.cmake'>CMakeRCCompiler.cmake</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CMakeSystem.cmake'>CMakeSystem.cmake</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
							</table>
							<!-- CompilerIdC Submodule -->
							<details>
								<summary><b>CompilerIdC</b></summary>
								<blockquote>
									<div class='directory-path' style='padding: 8px 0; color: #666;'>
										<code><b>⦿ build.CMakeFiles.3.29.2.CompilerIdC</b></code>
									<table style='width: 100%; border-collapse: collapse;'>
									<thead>
										<tr style='background-color: #f8f9fa;'>
											<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
											<th style='text-align: left; padding: 8px;'>Summary</th>
										</tr>
									</thead>
										<tr style='border-bottom: 1px solid #eee;'>
											<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CompilerIdC/CMakeCCompilerId.c'>CMakeCCompilerId.c</a></b></td>
											<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
										</tr>
									</table>
								</blockquote>
							</details>
							<!-- CompilerIdCXX Submodule -->
							<details>
								<summary><b>CompilerIdCXX</b></summary>
								<blockquote>
									<div class='directory-path' style='padding: 8px 0; color: #666;'>
										<code><b>⦿ build.CMakeFiles.3.29.2.CompilerIdCXX</b></code>
									<table style='width: 100%; border-collapse: collapse;'>
									<thead>
										<tr style='background-color: #f8f9fa;'>
											<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
											<th style='text-align: left; padding: 8px;'>Summary</th>
										</tr>
									</thead>
										<tr style='border-bottom: 1px solid #eee;'>
											<td style='padding: 8px;'><b><a href='/build/CMakeFiles/3.29.2/CompilerIdCXX/CMakeCXXCompilerId.cpp'>CMakeCXXCompilerId.cpp</a></b></td>
											<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
										</tr>
									</table>
								</blockquote>
							</details>
						</blockquote>
					</details>
					<!-- backdoor.dir Submodule -->
					<details>
						<summary><b>backdoor.dir</b></summary>
						<blockquote>
							<div class='directory-path' style='padding: 8px 0; color: #666;'>
								<code><b>⦿ build.CMakeFiles.backdoor.dir</b></code>
							<table style='width: 100%; border-collapse: collapse;'>
							<thead>
								<tr style='background-color: #f8f9fa;'>
									<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
									<th style='text-align: left; padding: 8px;'>Summary</th>
								</tr>
							</thead>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/backdoor.dir/backdoor.cpp.obj'>backdoor.cpp.obj</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
							</table>
						</blockquote>
					</details>
					<!-- injector.dir Submodule -->
					<details>
						<summary><b>injector.dir</b></summary>
						<blockquote>
							<div class='directory-path' style='padding: 8px 0; color: #666;'>
								<code><b>⦿ build.CMakeFiles.injector.dir</b></code>
							<table style='width: 100%; border-collapse: collapse;'>
							<thead>
								<tr style='background-color: #f8f9fa;'>
									<th style='width: 30%; text-align: left; padding: 8px;'>File Name</th>
									<th style='text-align: left; padding: 8px;'>Summary</th>
								</tr>
							</thead>
								<tr style='border-bottom: 1px solid #eee;'>
									<td style='padding: 8px;'><b><a href='/build/CMakeFiles/injector.dir/injector.cpp.obj'>injector.cpp.obj</a></b></td>
									<td style='padding: 8px;'>Code>❯ REPLACE-ME</code></td>
								</tr>
							</table>
						</blockquote>
					</details>
				</blockquote>
			</details>
		</blockquote>
	</details>
</details>

---

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

<div align="right">

[![][back-to-top]](#top)

</div>


[back-to-top]: https://img.shields.io/badge/-BACK_TO_TOP-151515?style=flat-square


---
