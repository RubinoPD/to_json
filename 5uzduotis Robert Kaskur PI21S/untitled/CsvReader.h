//
// Created by Robert Kaskur on 2022-06-09.
//

#ifndef UNTITLED_CSVREADER_H
#define UNTITLED_CSVREADER_H

#include <vector>
#include <fstream>
#include <iostream>
#include "CsvLine.h"

using namespace std;

class CsvReader {
public:
    vector<CsvLine> read(string fileName, bool hasHeader = false) {
        ifstream inputFile;
        vector<CsvLine> lines;
        inputFile.open(fileName.c_str());

        string line = "";

        if(hasHeader) {
            getline(inputFile, line);
        }

        while(getline(inputFile, line)) {

            CsvLine csvLine;
            csvLine.parse(line);
            lines.push_back(csvLine);
        }
        return lines;
    }
};


#endif //UNTITLED_CSVREADER_H
