#ifndef IO_H
#define IO_H

#include <string>
#include <vector>

#include "datum.h"

class IO {
   public:
      IO() {};
      ~IO() {};
      void LoadParallelData(const string& file_e, const string& file_f, vector<Datum*>& data);
};

#endif
