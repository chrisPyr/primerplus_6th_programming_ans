#ifndef _PERSON_H
#define _PERSON_H

#include <cstring>

using namespace std;

class Person{
  private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];

  public:
    Person() {lname = ""; fname[0] = '\0';}
    Person(const string &ln, const char *fname = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

#endif
