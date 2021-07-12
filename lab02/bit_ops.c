#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */

    /**
     * 76543210
     *    i    
     * 4th bit is what i want
     * shift x to left by 4 bits
     *     7654 then bitwise & with
     * 00000001 got
     * 00000004 
     * then we have the 4th bit
    */

    x = x >> n;
    x = x & 01;

    return x; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */

    /**
     * Get the nth bit
     * if n != v:
     *  n = 1 set to 0 
     *  n = 0 set to 1
     */

    unsigned mask = 1;
    mask = ~(mask << n);

    *x = *x & mask;
    v = v << n;

    *x = *x | v;
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {
    /* YOUR CODE HERE */

    /**
     * get the bit
     * set to its opposite value
     */

    unsigned bit = get_bit(*x, n);
    bit = ~bit;
    bit = get_bit(bit, 0);

    set_bit(x, n, bit);
}

