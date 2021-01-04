/**********************************
 * @ Author: Saeed Arabi
 * @ Create Time: 2021-01-02 17:52:01
 * @ Email: arabi@iastate.edu
 **********************************/
#include <iostream>
#include <string>

template <class T>

class Myvector {  // The class

  int size;
  T* vec;

 public:
  Myvector() { vec = NULL; }
  Myvector(T arr[], int arr_size) {
    size = arr_size;
    vec = new T[arr_size];
    for (int i = 0; i < arr_size; i++) {
      vec[i] = arr[i];
    }
  }
  void Print() {
    std::cout << "[";
    for (int i = 0; i < size - 1; i++) {
      std::cout << vec[i] << " ";
    }
    std::cout << vec[size - 1];
    std::cout << "]";
    std::cout << std::endl;
  }

  void get_size() { std::cout << size << std::endl; }
  void push_back(const T element) {
    T* temp = new T[size + 1];
    for (int i = 0; i < size; i++) {
      temp[i] = vec[i];
    }
    temp[size] = element;
    size++;
    delete[] vec;
    vec = temp;
  }
};

int main() {
  int arr[] = {1, 2, 3};
  Myvector<int> myvec(arr, 3);
  myvec.push_back(34);
  myvec.Print();
  myvec.get_size();

  return 0;
}