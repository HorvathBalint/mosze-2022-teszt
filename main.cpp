#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS];                                // A változó nem létezik.
    std::cout << '1-100 ertekek duplazasa'<<std::endl;           //lemaradt a  pontos vessző  és az endl a sor végéről.
    for (int i = 0;i<N_ELEMENTS;i++)                                             //rossz for ciklus
    {
        b[i] = (i+1) * 2;
    }
    std::cout << "Ertek:";                                    //nincs pontos vessző a sor végén.
    for (int i = 0; i<N_ELEMENTS; i++)                             //rossz a for ciklus.
    {
        std::cout<<b[i]<<' ';
    }
    std::cout<<std::endl;    
    std::cout << "Atlag szamitasa: " << std::endl;
    double atlag;                                                //átlagnak érdemes double típusúnak lenni.
    for (int i = 0; i < N_ELEMENTS; i++)                         //N_ELEMENTS után pontos vessző szükséges.
    {
        atlag += b[i];                                           //pontos vessző hiánya
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
