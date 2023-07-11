#pragma once

#ifdef _WIN32  // Windows platform
    #include <Windows.h>
#else  // Linux platform
    #include <unistd.h>
#endif


namespace CliKit{
namespace Sound{
    void beep(){
#ifdef _WIN32
        // Windows platform: Ring the bell using the Beep function
        Beep(750, 300);
#else
        // Linux platform: Ring the bell using the write system call
        write(STDOUT_FILENO, "\a", 1);
#endif      
    }
};
};
