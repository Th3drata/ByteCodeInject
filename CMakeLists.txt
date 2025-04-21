cmake_minimum_required(VERSION 3.10)
project(ProcessInjection)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add winsock library for networking
if(WIN32)
    add_definitions(-D_WIN32_WINNT=0x0601)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lws2_32")
endif()

add_executable(injector injector.cpp)
add_executable(backdoor backdoor.cpp) 