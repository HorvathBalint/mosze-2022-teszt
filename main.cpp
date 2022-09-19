#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];// A változó nem létezik.
    std::cout << '1-100 ertekek duplazasa'//lemaradt a  pontos vessző  és az endl a sor végéről.
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)//rossz a for ciklus.
    {
        std::cout << "Ertek:"//nincs pontos vessző a sor végén.
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;//átlagnak érdemes double típusúnak lenni.
    for (int i = 0; i < N_ELEMENTS, i++)//N_ELEMENTS után pontos vessző szükséges.
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
