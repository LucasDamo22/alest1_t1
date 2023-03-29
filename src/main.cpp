#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

std::string alg_1(int n)
{
    int op_count = 0;
    int i, j, k, res = 0;
    std::stringstream SS;
    for (i = 0; i <= n + 1; i++)
    {
        for (j = 1; j <= i * i; j += i + 1)
        {
            // std::cout<<j<<std::endl;
            for (k = i / 2; k <= n + j; k += 2)
            {

                // std::cout<<k<<std::endl;
                res = res + n - 1;
                op_count++;

                SS << op_count << ";" << res << std::endl;
            }
        }
    }
    return SS.str();
}

std::string alg_2(int n)
{
    int op_count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    std::stringstream SS;
    for (i = n; i <= n; i += i / 2 + 1)
    {
        for (j = i / 2; j <= i * i; j += i + 1)
        {
            for (k = n; k <= 2 * n; k += i + 1)
            {
                res = res + n;
                op_count++;

                SS << op_count << ";" << res << std::endl;
            }
        }
    }
    return SS.str();
}
std::string alg_3(int n)
{
    int op_count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    std::stringstream SS;

    for (i = 1; i <= n * n; i += 2)
    {
        for (j = i / 2; j <= 2 * i; j += i / 2 + 1)
        {
            for (k = j + 1; k <= n + j; k += k / 2 + 1)
            {
                res = res + abs(j - i);
                op_count++;
                SS << i << ";" << op_count << ";" << res << std::endl;
            }
        }
    }

    return SS.str();
}

std::string alg_4(int n)
{
    int op_count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    std::stringstream SS;

    for (i = n; i <= n * n; i += 2)
    {
        for (j = n + 1; j <= n * n; j += 2)
        {
            for (k = j; k <= 2 * j; k += 2)
            {
                res = res + 1;
                op_count++;
                SS << op_count << ";" << res << std::endl;
            }
        }
    }

    return SS.str();
}

std::string alg_5(int n)
{
    int op_count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    std::stringstream SS;

    for (i = 1; i <= n * n; i += 1)
    {
        for (j = 1; j <= i; j += 2)
        {
            for (k = n + 1; k <= 2 * i; k += i * j)
            {
                res = res + k + 1;
                op_count++;
                SS << op_count << ";" << res << std::endl;
            }
        }
    }

    return SS.str();
}

std::string alg_teste(int n)
{
    int op_count = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int res = 0;
    std::stringstream SS;

    for (i = 1; i <= n * n; i += 1)
    {
        for (j = 1; j <= i; j += 2)
        {
            for (k = n + 1; k <= 2 * i; k += i * j)
            {
                res = res + k + 1;
                op_count++;
            }
        }
    }
    SS << n << ";" << op_count << std::endl;
    return SS.str();
}

int main(int argc, char **argv)
{

    if (atoi(argv[1]) == 1)
    {
        std::ofstream arqOutAlg_1;
        std::string file1 = "./data/Algoritmo1.csv";
        arqOutAlg_1.open(file1.c_str(), std::ios::out);
        if (!arqOutAlg_1.is_open())
        {
            std::cout << "Erro na geração do arquivo 1";
            return 1;
        }
        for (int i = 1; i < atoi(argv[2]); i++)
        {
            arqOutAlg_1 << alg_1(i);
        }

        arqOutAlg_1.close();
    }
    if (atoi(argv[1]) == 2)
    {
        std::ofstream arqOutAlg_2;
        std::string file2 = "./data/Algoritmo2.csv";
        arqOutAlg_2.open(file2.c_str(), std::ios::out);
        if (!arqOutAlg_2.is_open())
        {
            std::cout << "Erro na geração do arquivo 2";
            return 1;
        }
        for (int i = 1; i < atoi(argv[2]); i++)
        {
            arqOutAlg_2 << alg_2(i);
        }
        arqOutAlg_2.close();
    }
    if (atoi(argv[1]) == 3)
    {
        std::ofstream arqOutAlg_3;
        std::string file3 = "./data/Algoritmo3.csv";
        arqOutAlg_3.open(file3.c_str(), std::ios::out);
        if (!arqOutAlg_3.is_open())
        {
            std::cout << "Erro na geração do arquivo 3";
            return 1;
        }
        arqOutAlg_3 << alg_3(atoi(argv[2]));
        arqOutAlg_3.close();
    }
    if (atoi(argv[1]) == 4)
    {
        std::ofstream arqOutAlg_4;
        std::string file4 = "./data/Algoritmo4.csv";
        arqOutAlg_4.open(file4.c_str(), std::ios::out);
        if (!arqOutAlg_4.is_open())
        {
            std::cout << "Erro na geração do arquivo 4";
            return 1;
        }
        arqOutAlg_4 << alg_4(atoi(argv[2]));
        arqOutAlg_4.close();
    }
    if (atoi(argv[1]) == 5)
    {
        std::ofstream arqOutAlg_5;
        std::string file5 = "./data/Algoritmo5.csv";
        arqOutAlg_5.open(file5.c_str(), std::ios::out);
        if (!arqOutAlg_5.is_open())
        {
            std::cout << "Erro na geração do arquivo 5";
            return 1;
        }
        arqOutAlg_5 << alg_5(atoi(argv[2]));
        arqOutAlg_5.close();
    }

    if (atoi(argv[1]) == 6)
    {
        std::ofstream arqOutAlg_teste;
        std::string fileteste = "./data/AlgoritmoTeste.csv";
        arqOutAlg_teste.open(fileteste.c_str(), std::ios::out);
        if (!arqOutAlg_teste.is_open())
        {
            std::cout << "Erro na geração do arquivo 5";
            return 1;
        }
        for (int i = 1; i < 100; i++)
        {
            arqOutAlg_teste << alg_teste(i);
        }
        arqOutAlg_teste.close();
    }

    std::cout << "Arquivos enviados para a pasta ./data" << std::endl;
}