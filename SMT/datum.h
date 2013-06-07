#ifndef DATUM_H
#define DATUM_H

#include <string>
#include <vector>

using namespace std;

class Datum {
   public:
      Datum() {};
      vector<string>& target() {return _target;}
      vector<string>& source() {return _source;}
      ~Datum() {};
   private:
      vector<string> _source;
      vector<string> _target;
};

#endif
