#include <iostream>
#include "PEParser.h"
using namespace std;

PEParser::PEParser(const string& path) : filePath(path) {};

void PEParser::fileParser() {
    ifstream file(filePath, ios::binary);

    if(!file.is_open()) {
        cerr << "Failed to open file" << endl;
        return;
    }

    file.read(reinterpret_cast<char*>(&dosHeader), sizeof(IMAGE_DOS_HEADER));
    file.seekg(dosHeader.e_lfanew, ios::beg);
};