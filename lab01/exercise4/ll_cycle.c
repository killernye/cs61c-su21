#include <stdbool.h>
#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    
    if (head == NULL) {
        return 0;
    }


    node *fast_ptr = head;
    node *slow_ptr = head;

    bool first_step = false;

    while (fast_ptr != NULL) {

        first_step = !first_step;
        fast_ptr = fast_ptr->next;
        

        if (!first_step) {
            slow_ptr = slow_ptr->next;
            if (slow_ptr == fast_ptr) {
                return 1;
            }
        }
    }

    return 0;
}
