#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    int k; // k = number of times
    char c;
    k = 0;

    while((c = *str++)) {
        if (c == letter) {
            k++;
        }
    }
    return k;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    
    char *str = dna_seq->sequence;
    dna_seq->A_count = num_occurrences(str, 'A');
    dna_seq->C_count = num_occurrences(str, 'C');
    dna_seq->G_count = num_occurrences(str, 'G');
    dna_seq->T_count = num_occurrences(str, 'T'); 

    return;
}
