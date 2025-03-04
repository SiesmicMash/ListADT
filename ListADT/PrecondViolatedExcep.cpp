//
//  PrecondViolatedExcep.cpp
//  ListADT
//
//  Created by Usaid Ali Syed on 2025-03-04.
//

#include "PrecondViolatedExcep.hpp"
PrecondViolatedExcep::PrecondViolatedExcep(const string& message):
    std::logic_error("Precondistion Violated Exception: " + message) {}
