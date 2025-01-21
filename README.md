# Undefined Behavior with std::vector and Pointers
This repository demonstrates a subtle but important C++ bug related to using pointers to access elements of a `std::vector` after modifying its size using `push_back()`.

The code in `bug.cpp` showcases how accessing a vector element using a pointer after calling `push_back()` can lead to undefined behavior if the vector needs to reallocate its internal memory.  This is because `push_back()` may invalidate any existing pointers into the vector's data.

The solution in `bugSolution.cpp` provides an alternative approach to safely access vector elements, avoiding potential undefined behavior.