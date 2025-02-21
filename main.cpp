#include <iostream>

int cong(int num1, int num2);
int tru(int num1, int num2);
int nhan(int num1, int num2);
int chia(int num1, int num2);

int main(){
    int num1;
    int num2;
    int result = 0;
    std::cin >> num1;
    std::cin >> num2;
    result = cong(num1, num2);
    std::cout << "result = " << result << std::endl;
    result = tru(num1, num2);
    std::cout << "result = " << result << std::endl;
    result = nhan(num1, num2);
    std::cout << "result = " << result << std::endl;
    result = chia(num1, num2);
    std::cout << "result = " << result << std::endl;
    // chia(num2, num2);
    return 0;
}

int cong(int num1, int num2){
    return num1 + num2;
}
int tru(int num1, int num2){
    return num1 - num2;
}
int nhan(int num1, int num2){
    return num1 * num2;
}
int chia(int num1, int num2){
    return num1 / num2;
}

