#include <stdio.h>

int main(void) {
    int x = 42;           // a normal integer
    int *p = &x;          // p is a pointer to int, stores address of x
    int **pp = &p;        // pp is a pointer to a pointer to int

    // Dereferencing
    printf("x: %d\n", x);       // direct value
    printf("*p: %d\n", *p);     // value p points to (same as x) 
    printf("**pp: %d\n", **pp); // value pp points to → p → x /if they are all the same why do we need multiple levels of pointers? 

    // Changing values via pointer
    *p = 99;             // changes x through /why would i change it through a pointer and not directly? would it be when im passing the pointer to another function and i still want to edit it from the origin?
    printf("x after *p = 99: %d\n", x);

    // Pointer arithmetic
    int arr[3] = {10, 20, 30};
    int *pa = arr;       // points to first element (arr[0]) /why can i put arr and not &arr? is it because an array by nature is already a pointer to the first element?
    printf("arr[0] via *pa: %d\n", *pa);     // 10
    printf("arr[1] via *(pa+1): %d\n", *(pa+1)); // 20 /what would happen if i did *pa + 1? would it be the same as *(pa+1)?

    // Pointer to const vs const pointer
    const int *ptr_to_const = &x; // can't change *ptr_to_const
    // *ptr_to_const = 5; // ❌ not allowed

    int y = 55;
    int *const const_ptr = &y;   // const pointer: can't change where it points
    *const_ptr = 77;             // ✅ allowed: change value at y /why is this allowed but not the previous one?
    // const_ptr = &x; // ❌ not allowed: change address

    // Void pointers (generic pointers)
    void *vp = &x;
    printf("x via void pointer: %d\n", *(int*)vp); // must cast before dereference

    return 0;
}
//when do i use * before a variable? when do i use **? when do i use &? when do i use * and & together? when do i use * and ** together? when do i use & and ** together? when do i use * and & and ** together?