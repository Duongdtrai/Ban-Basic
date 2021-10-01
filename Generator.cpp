#include <bits/stdc++.h>
#include <Windows.h>
#include <strsafe.h>
#include "Header/ITPlib.hpp"
using namespace std;

bool needClean = false;

void selfDestruct(){
    TCHAR szModuleName[MAX_PATH];
    TCHAR szCmd[2 * MAX_PATH];
    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};
    GetModuleFileName(NULL, szModuleName, MAX_PATH);
    StringCbPrintf(szCmd, 2 * MAX_PATH, TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\""), szModuleName);
    CreateProcess(NULL, szCmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
}

int main(){
    int interrupted = 0;
    if(!isExist(".\\Creator\\InCreator"))
        system("g++ .\\Creator\\InCreator.cpp -o .\\Creator\\InCreator");
    interrupted = system(".\\Creator\\InCreator");
    remove(".\\Creator\\InCreator");
    remove(".\\Creator\\InCreator.exe");
    if(interrupted){
        cout << endl;
        system("pause");
        if(needClean)   selfDestruct();
        return 0;
    }
    if(!isExist(".\\Creator\\OutCreator"))
        system("g++ .\\Creator\\OutCreator.cpp -o .\\Creator\\OutCreator");
    system(".\\Creator\\OutCreator");
    remove(".\\Creator\\OutCreator");
    remove(".\\Creator\\OutCreator.exe");
    remove(".\\Solver\\MainSolution");
    remove(".\\Solver\\MainSolution.exe");
    Sleep(1000);
    cout << endl;
    system("python .\\PackageProblem.py");
    cout << "Everything is done!\n";
    system("pause");
    if(needClean)   selfDestruct();
    return 0;
}