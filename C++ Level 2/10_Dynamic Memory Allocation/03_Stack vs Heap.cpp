#include <iostream>
using namespace std;

void StackExample() {
    // This variable is stored in the stack memory.
    int x = 10;
    cout << "[Stack] Value of x = " << x << endl;

    // Stack memory is automatically managed.
    // 'x' will be destroyed when this function ends.
}

void HeapExample() {
    // This pointer is in the stack, but it points to heap memory.
    int* ptr = new int(20);

    cout << "[Heap] Value pointed to by ptr = " << *ptr << endl;

    // It's the programmer's responsibility to free heap memory.
    delete ptr;

    // If you forget to delete, it causes a memory leak.
}

int main() {
    cout << "== Stack Memory Example ==" << endl;
    StackExample();

    cout << "\n== Heap Memory Example ==" << endl;
    HeapExample();

    return 0;
}


/*
==============================
📚 Explanation: Stack vs Heap
==============================

1. Stack:
   - Used for static memory allocation.
   - Variables are automatically created and destroyed.
   - Memory is managed by the system (compiler).
   - Very fast and safe, but limited in size.

2. Heap:
   - Used for dynamic memory allocation.
   - Memory is manually allocated using 'new' and must be freed using 'delete'.
   - Gives control over memory lifetime and size.
   - Risk of memory leaks and fragmentation if not managed properly.

=================================================
🧾 Summary of Differences (Stack vs Heap in C++)
=================================================

| Aspect            | Stack                         | Heap                          |
|-------------------|-------------------------------|-------------------------------|
| Allocation        | Automatic (compiler)          | Manual (programmer)           |
| Deallocation      | Automatic                     | Manual using 'delete'         |
| Speed             | Faster                        | Slower                        |
| Lifetime          | Ends with function/block      | Until deleted manually        |
| Memory Size       | Limited                       | Large                         |
| Errors            | Stack overflow (rare)         | Memory leaks (common)         |
| Use Case          | Local variables               | Dynamic data, objects         |
*/
