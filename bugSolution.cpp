std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
std::vector<int> vecCopy = vec; // Create a copy to avoid dangling pointers
int* ptr = &vecCopy[0]; 
vec.clear(); // The original vector is cleared
for (int i = 0; i < 10; ++i) {
  std::cout << ptr[i] << " ";
} 
// or use vecCopy directly: 
for (int i = 0; i < 10; ++i){
    std::cout << vecCopy[i] << " ";
}