std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[0]; 
vec.clear(); //vec is cleared here
for (int i = 0; i < 10; ++i) {
  std::cout << ptr[i] << " "; // Dangling pointer: accessing memory that has been deallocated
}