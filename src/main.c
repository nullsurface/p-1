#include <stdio.h>
#include "pollard.h"
#include "./modules/linkedlist/list.h"

int main() {
    int base = 0;
    int first = 2;
    int second = 10;
    int third = 5157437;

    print_list(pollard_1(base));
    //print(pollard_1(first));
    //print(pollard_1(second));
    //print(pollard_1(third));

    return 0;
}
