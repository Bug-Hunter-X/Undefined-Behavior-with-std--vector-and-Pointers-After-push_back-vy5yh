std::vector<int> vec = {1, 2, 3, 4, 5};
int *ptr = &vec[0];
int value = *ptr; // Accessing element using pointer
vec.push_back(6); // Adding element using push_back()
value = *ptr; // Accessing the same element using pointer again
std::cout << value << std::endl; // Output may not be the same