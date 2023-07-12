#include "sound.h"

#include <iostream>
#include <string>
#include <filesystem>

#ifdef _WIN32  // Windows platform
    #include <Windows.h>
#else  // Linux platform
    #include <unistd.h>
    #include <alsa/asoundlib.h>
#endif

using namespace std;
using namespace CliKit;

void Sound::beep(){
    cerr << "Not implemented yet." << endl;
}

void Sound::playSound(string path){
    if(!filesystem::exists(path)) {
        cerr << "Invalid Path." << endl;
        return;
    }

#ifdef _WIN32
    PlaySound(TEXT("sound.wav"), NULL, SND_FILENAME);
#else
    snd_pcm_t *handle;
    if (snd_pcm_open(&handle, "default", SND_PCM_STREAM_PLAYBACK, 0) < 0) {
        cerr << "Failed to open file." << endl;
        return;
    }

    snd_pcm_set_params(handle, SND_PCM_FORMAT_S16_LE, SND_PCM_ACCESS_RW_INTERLEAVED, 2, 44100, 1, 500000);

    FILE *file = fopen(path, "r");
    if (file == NULL) {
        cerr << "Failed to load file." << endl;
        return;
    }

    char buf[1024];
    while (fread(buf, sizeof(buf), 1, file) > 0){
        snd_pcm_writei(handle, buf, sizeof(buf));
    }

    snd_pcm_close(handle);
#endif
}
