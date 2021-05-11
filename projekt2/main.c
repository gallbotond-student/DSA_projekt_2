#include <stdio.h>
#include "functions.h"

int main() {
    root * r = create(1, "AAA");
    insert(&r, 2, "ASDDAS");
    insert(&r, 3.6, "ADDSA");
    insert(&r, -5.8, "EEEE");
    insert(&r, 0, "POSPA");
    insert(&r, -4, "DADADDAD");

    inorder(r);
}
