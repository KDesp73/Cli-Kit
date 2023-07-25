#include "sound.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <sys/stat.h>

#ifdef _WIN32  // Windows platform
    #include <Windows.h>
#else  // Linux platform
    #include <unistd.h>
#endif

using namespace std;
using namespace CliKit;

bool pathExists(string path){
#ifdef _WIN32
	replace(path.begin(), path.end(), '/', '\\');
#endif


    struct stat buffer;
    return (stat(path.c_str(), &buffer) == 0);
}

void Sound::beep(){
    cerr << "Not implemented yet." << endl;
}

void Sound::playSound(string path){
    if(!pathExists(path)) {
        cerr << "Invalid Path." << endl;
        return;
    }

#ifdef _WIN32
    // Not implemented for windows yet
	
	//PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME);
#else
    system(("paplay " + path).c_str());
#endif
}
