#include <cstdlib>
#include <iostream>
#include <vector>
#include <list>

template<class IT>
void sort(IT beg, IT end)
{
    for (IT i = beg; i != end; ++i) {
        for (IT j = beg; j != end; ++j) {
            if (*j < *i) {
                std::swap(*i, *j);
            }
        }
    }
}

int main() {
    int arr[] = { 123, 3, 0, 13212, -100 };
    
    sort(&arr[0], &arr[3]); // arr: 0, 3, 123, 13212, -100
    for (size_t i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    sort(&arr[2], &arr[5]); // arr: 0, 3, -100, 123, 13212
    for (size_t i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::vector<double> vec = { 123.0, 3.0, 0.0, 13212.0, -100.0 };
    
    sort(vec.begin(), vec.end()); // vec: -100.0, 0.0, 3.0, 123.0, 13212.0
    for (size_t i = 0; i < 5; ++i) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;

    std::list<double> l = { 123.0, 3.0, 0.0, 13212.0, -100.0 };
    sort(l.begin(), l.end()); // vec: -100.0, 0.0, 3.0, 123.0, 13212.0
    for (size_t i = 0; i < 5; ++i) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;

    system("pause");
    return 0;
}