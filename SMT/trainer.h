#ifndef TRAINER_H
#define TRAINER_H

#include "m1.h"
#include "datum.h"

class Trainer {
   public:
      Trainer(M1* model, vector<Datum*>& data) : _model(model), _data(data) {};
      void EM(unsigned int n_iter);
      ~Trainer() {};
   private:
      M1* _model;
      vector<Datum*> _data;
};

#endif
