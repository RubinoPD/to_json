//
// Created by Robert Kaskur on 2022-06-09.
//

#include "CsvLine.h"


void CsvLine::parse(string line, char delimit) {

    stringstream inLine(line);
    string tempCol = "";
    while(getline(inLine, tempCol, delimit)) {
        values.push_back(tempCol);
    }
};
string CsvLine::getString(int colNumber) {
    return values[colNumber];
};
double CsvLine::getDouble(int colNumber) {
    return atof(values[colNumber].c_str());
};
int CsvLine::getInt(int colNumber) {
    return atoi(values[colNumber].c_str());
};