#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;  // Create an empty vector of integers

    // Add elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Access and print elements in the vector
    for (int i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i] << " | ";
    }

    std::vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end();it++){
        std::cout << *it << " | ";
    }

    for(auto element:numbers){
        std::cout << element << " | ";
    }

    std::vector<int> num2(3,50);

    std::swap(numbers, num2);
    std::cout << "After sapping " << std::endl;
    for (auto element : numbers)
    {
        std::cout << element << "  ";
    }
     for(auto element:num2){
        std::cout << element << "  ";
    }
    return 0;
}
