#include <windows.h>
#include <iostream>
#include <shlobj.h>
#include <time.h>
#include <cstdlib>
#include <stdio.h>
#include <sstream>
#include <sys/types.h>
#include <algorithm>
#include <fstream>
#include <filesystem>
#include <exception>
#include <time.h>
#include <string>
#include <conio.h>
#include <vector>
#include "main.h"

using namespace std;
namespace fs = std::filesystem;

vector<string> paths;
vector<fs::path> images;

int getRandom(int count) {
    return rand() % count + 1;
};

void addFilesToList(fs::path paths) {

}

void setBackground(fs::path path) {
    string file = path.string();
    std::wstring widestr = std::wstring(file.begin(), file.end());
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void*)widestr.c_str(), SPIF_SENDCHANGE);
}

void updatePaths(vector<string> newPaths) {
    paths.clear();
    paths = newPaths;
}

void recalculateImageList() {
    for each (string path in paths){
        for (const auto& entry : fs::directory_iterator(path)) {
            images.push_back(entry);
        }
    }
}

void play() {
    paths.push_back("E:\\Backgrounds\\Background\\Website switcher\\cross");
    srand((unsigned)time(NULL));
    fs::path wallpaper$;
    recalculateImageList();
    int chosen = 0;
    int current = 0;
    
    std::cerr << images.size() << std::endl;
    
    while (true) {
        chosen = getRandom(images.size());
        setBackground(images.at(chosen));
        Sleep(10000);
    }
}