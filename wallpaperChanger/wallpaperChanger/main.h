#define main
#include "hidsdi.h"

int getRandom(int count);
void addFilesToList(fs::path paths);
void setBackground(fs::path path);
void updatePaths(vector<string> newPaths);
void recalculateImageList();