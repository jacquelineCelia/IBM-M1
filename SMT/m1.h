#ifndef m1_H
#define m1_H

#include <map>
#include <string>

using namespace std;

class M1 {
  public:
     M1(int s_char, int t_char) : _num_s_char(s_char), _num_t_char(t_char) {};
     void UpdateT();
     void UpdateC(string& e, string& f, float);
     void ResetC();
     float t(string& e, string& f); 
     ~M1();
  private:
     map<string, map<string, float> > _t;
     map<string, map<string, float> > _c;
     int _num_s_char;
     int _num_t_char;
};

#endif
