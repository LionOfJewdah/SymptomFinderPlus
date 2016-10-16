//
//  diseaseMap.hpp
//  DubHacksLitFam
//
//  Created by David Paul Silverstone on Sat, Oct 15th, 2016.
//
//

#ifndef diseaseMap_hpp
#define diseaseMap_hpp

//#include <stdio.h>
#include <string>
#include <map>
#include "disease.h"

class diseaseMap {
private:
    std::map<std::string, Disease*> whatDiseasesAreThere;
public:
    diseaseMap();
    ~diseaseMap();
protected:

};


#endif /* diseaseMap_hpp */
