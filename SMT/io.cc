#include <iostream>
#include <fstream>
#include <sstream>

#include "io.h"
#include "util.h"

void IO::LoadParallelData(const string& file_e, \
                          const string& file_f, \
			  vector<Datum*>& data) {
    ifstream fin_e(file_e.c_str());
    ifstream fin_f(file_f.c_str());
    string line_e;
    string line_f;

    while (getline(fin_e, line_e) && getline(fin_f, line_f)) {
	vector<string> elems_e;
	vector<string> elems_f;
	Util::Split(line_e, ' ', elems_e);
	Util::Split(line_f, ' ', elems_f);
	Datum* d = new Datum(elems_f, elems_e);
	data.push_back(d);
    }

    fin_e.close();
    fin_f.close();
}
