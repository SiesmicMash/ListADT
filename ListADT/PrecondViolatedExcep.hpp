//
//  PrecondViolatedExcep.hpp
//  ListADT
//
//  Created by Usaid Ali Syed on 2025-03-04.
//

#ifndef PRECOND_VIOLATED_EXCEP_
#define PRECOND_VIOLATED_EXCEP_

#include <stdexcept>
#include <string>
using namespace std;

class PrecondViolatedExcep : public std::logic_error {
public:
    PrecondViolatedExcep(const string& message = "");
};

#endif /* PrecondViolatedExcep_hpp */
