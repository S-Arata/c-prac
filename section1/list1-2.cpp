#include <iostream>

// 変数を受け取らず、戻り値を返さない関数
void hello_world()
{
    std::cout << "Hello, world" << std::endl;
}

// aとbの2つを引数として受け取り、加算の結果を表示
void show_sum(int a, int b)
{
    int c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    hello_world();
    show_sum(1,2);
}