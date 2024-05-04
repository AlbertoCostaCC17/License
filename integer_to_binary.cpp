#include <iostream>
#include <bitset>
#include <vector>
std::vector<std::string> int_to_binary(const std::vector<int>& numbers) {
    std::vector<std::string> binary_numbers;
    for (int num : numbers) {
        std::bitset<sizeof(int) * 8> binary(num);
        binary_numbers.push_back(binary.to_string());
    }
    return binary_numbers;
}
int main() {
    std::vector<int> numbers = {32, 57, 101, 77};
    std::vector<std::string> binary_numbers = int_to_binary(numbers);

    std::cout << "Binary representation of numbers:" << std::endl;
    for (const auto& binary : binary_numbers) {
        std::cout << binary << std::endl;
    }
    return 0;
}
