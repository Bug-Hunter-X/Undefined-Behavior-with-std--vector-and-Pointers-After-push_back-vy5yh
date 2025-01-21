std::vector<int> vec = {1, 2, 3, 4, 5};
int value = vec[0]; // Accessing element using indexing
vec.push_back(6); // Adding element using push_back()
value = vec[0]; // Accessing the same element using indexing
std::cout << value << std::endl; // Output remains consistent