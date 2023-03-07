#include <math.h>
#include <stdlib.h>
#include "pollard.h"
#include "./modules/linkedlist/list.h"
#include <stdio.h>

List* pollard_1(int num) {
    printf("FLAG 1");
    List* prime_factors = NULL;
    prime_factors = add_node(prime_factors, num);
    printf("FLAG 2");
    
    return (List *) prime_factors;
}


