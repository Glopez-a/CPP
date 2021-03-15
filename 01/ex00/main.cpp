#include "Pony.hpp"

void    ponyOnHeap(void)
{
    Pony    *my_pony_heap;

    my_pony_heap = new Pony("Heapy");
    my_pony_heap->fire_ball();
    my_pony_heap->shout();

    delete my_pony_heap;
}

void    ponyOnStack(void)
{
    Pony    my_pony_stack("Stacky");

    my_pony_stack.fire_ball();
    my_pony_stack.shout();
}


int main(void)
{
    std::cout << "Creating a pony on the heap\n";
    ponyOnHeap();
    std::cout << "Creating a pony on the stack\n";
    ponyOnStack();
}