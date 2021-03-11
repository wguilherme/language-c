// importação de biblioteca no C começa com # e o nome entre <>
#include <iostream>

using namespace std;

// o código C tem uma única função principal, que é a main
// main retorna um inteiro (int) por isso devemos dar um return 0 no final da função
int main()
{
   // cout é a função de output c-out
   // namespace define o escopo, pode-se fazer diretamente assim:
   // std::cout << "Hello World" << std::endl;
   // ou declarar o using namespace anteriormene e  usar normalmente
   cout << "Hello World" << endl;
   return 0;
}