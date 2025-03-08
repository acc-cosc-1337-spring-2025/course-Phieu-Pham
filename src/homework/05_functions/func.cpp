//add include statements
#include <iostream>
#include "func.h"
#include <string>

//add function code here
double get_gc_content(const std::string& dna){
    double C_D_count = 0;

    for (int i = 0; i <= (int)dna.length(); i++){
        if (dna[i] == 'C' || dna[i] == 'G'){
            C_D_count += 1;
        }
    }

    return C_D_count / dna.length();
}

std::string get_reverse_string(std::string dna){
    std::string handled_dna = dna;

    for (int i = 0; i < (int)dna.length(); i++){
        handled_dna[i] = dna[dna.length() - (i+1)];
    }

    return handled_dna;
}

std::string get_dna_complement(std::string dna){
    std::string handled_dna = get_reverse_string(dna);
    
    for (int i = 0; i <= (int)dna.length(); i++){
        if(handled_dna[i] == 'A'){
            handled_dna[i] = 'T';
        }
        else if(handled_dna[i] == 'T'){
            handled_dna[i] = 'A';
        }
        else if(handled_dna[i] == 'C'){
            handled_dna[i] = 'G';
        }
        else if(handled_dna[i] == 'G'){
            handled_dna[i] = 'C';
        }
    }

    return handled_dna;
}