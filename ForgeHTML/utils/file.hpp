//
//  file.h
//  HTMLParser C++
//
//  Created by Chidume Nnamdi on 15/04/2026.
//

#ifndef file_h
#define file_h

#include <fstream>
#include <sstream>
#include <cstring>

using namespace std;
namespace fs = std::filesystem;

string read_file(const string& filename);

fs::path findFileRecursive(const fs::path& root, const std::string& fileName);

#endif /* file_h */
