#include "m1.h"

M1::M1() {
}

void M1::UpdateT() {
    map<string, map<string, float> >::iterator e_iter = _c.begin();
    for (; e_iter != _c.end(); ++e_iter) {
        float sum = 0;
        map<string, float>::iterator f_iter = (e_iter -> second).begin();
        for (; f_iter != (e_iter -> second).end(); ++f_iter) {
      	    sum += f_iter -> second;
        }
        f_iter = (iter -> second).begin();
        string e = e_iter -> first;
        for (; f_iter != (e_iter -> second).end(); ++f_iter) {
	    string f = f_iter -> first;
	    _t[e][f] = f_iter -> second / sum;
        }
    }
}

void M1::UpdateC(string& e, string& f, float count) {
    if (_c.find(e) == _c.end()) {
    	map<string, float> sub_c;
        _c[e] = sub_c;
    }
    if (_c[e].find(f) == _c[e].end()) {
    	_c[e][f] = 0.0;
    }
    _c[e][f] += count; 
}

void M1::ResetC() {
    map<string, map<string, float> >::iterator e_iter = _c.begin();
    for (; e_iter != _c.end(); ++e_iter) {
	map<string, float>::iterator f_iter = (e_iter -> second).begin();
	for (; f_iter != (e_iter -> second).end(); ++f_iter) {
	    f_iter -> second = 0.0;
	}
    }
}

float M1::t(string& e, string& f) {
    if (_c.find(e) == _c.end()) {
    	return 1.0 / _num_s_char; 
    }
    else if (_c[e].find(f) == _c[e].end()) {
        return 1.0 / _num_s_char;
    }
    else {
    	return _t[e][f];
    }
}

M1::~M1() {
}
