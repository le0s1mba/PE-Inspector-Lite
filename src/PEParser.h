#ifndef PEPARSER_H
#define PEPARSER_H

#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

class PEParser {
    string filePath;
    char *fileBuffer;
    size_t fileSize;

    IMAGE_DOS_HEADER dosHeader;
public:
    PEParser(const string& path) : filePath(path) {};
    void fileParser() {};
};

#endif