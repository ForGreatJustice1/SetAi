/*
 * set.h
 * 
 * Header file for sets.
 *
 */

/* Include other header files */
#include <stdbool.h>

/* Set Type */
typedef struct set {
    /* Set holds an array of pointers to the actual values. */
    unsigned void **members;
    /* Function to compare members */
    bool (*comparator)(void *a, void *b);
} t_set;

/* Function Prototypes */
t_set set_union(t_set a, t_set b);
t_set set_itersect(t_set a, t_set b);
t_set set_complement(t_set a);
t_set set_diff(t_set a, t_set b);
bool set_eq(t_set a, t_set b);
t_set set_xor(t_set a, t_set b);
unsigned char cardinality(t_set a);
