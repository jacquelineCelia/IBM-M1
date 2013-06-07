#include "trainer.h"

void Trainer::EM(unsigned int n_iter) {
    for (unsigned int i = 0; i < n_iter; ++i) {
        _model -> ResetC(); 
	vector<Datum*>::iterator iter = _data.begin();
	for (; iter != _data.end(); ++iter) {
	    vector<string> e = iter -> target();
	    vector<string> f = iter -> source();
	    for (size_t i = 0; i < f.size() ;++i) {
		vector<float> delta(e.size(), 0);
		float sum = 0;
	    	for (size_t j = 0; j < e.size(); ++j) {
		    delta[j] = _model -> t(e[j], f[i]);
		    sum += delta[j];
		}
		for (size_t j = 0; j < e.size(); ++j) {
		    delta[j] /= sum;
		    _model -> UpdateC(e[j], f[i], delta[j]);
		}
	    }
	}
	_model -> UpdateT();
    }
}
