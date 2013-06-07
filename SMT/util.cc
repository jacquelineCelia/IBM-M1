#include <sstream>
#include "util.h"

void Util::Split(const string& s, \
		 char del, \
		 vector<string>& elems) {
   stringstream ss(s);
   string item;
   while (getline(ss, item, del)) {
      elems.push_back(item);
   }
}
