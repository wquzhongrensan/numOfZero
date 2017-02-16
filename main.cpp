#include <iostream>

int numOfZero(int num){
    if (num < 0) {
        return 0;
    }
    int res = 0;
    while (num != 0) {
        res += num/5;
        num/=5;
    }
    return res;
}



int main(int argc, const char * argv[]) {
    std::cout << "一个非负整数的阶乘，得到结果的尾部为0的个数\n";
   int res = numOfZero(10);
    std::cout << "结果是" << res << std::endl;
    return 0;
}
