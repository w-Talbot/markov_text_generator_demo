//
//  ngram.hpp
//  markov_text_generator_jan2023
//
//  Created by Wesley Talbot on 1/22/23.
//

#ifndef ngram_hpp
#define ngram_hpp

#include <stdio.h>
#include "ofMain.h"

class Ngram{
    
public:
    string ngram_text;
    int number_of_instances;
    vector<string>next_character;
};
#endif /* ngram_hpp */
