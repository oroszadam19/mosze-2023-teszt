#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa' // az egyszeres ' helyett " kell hasznalni, mivel nem karaktert hanem sztringet iratunk ki és a végén ;-vel kell lezarni
    for (int i = 0;) // a for ciklus hianyzik, nincs meg hogy meddig menjen es az se hogy mennyivel novekedjen az i
    {
        b[i] = i * 2;  // a program nem 1-100-ig hanem 0-99-ig szamol
    }
    for (int i = 0; i; i++) // le se fut mivel a for ciklusban nincs deklaralva hogy meddig menjen az i
    {
        std::cout << "Ertek:" // nincs pontosvesszovel lezarva ezert hibat adna
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs kezdeti ertek beallitva
    for (int i = 0; i < N_ELEMENTS, i++) // az "i < N_ELEMENTS," vegen a sima vesszo helyett pontos vesszot kell hasznalni es az i++ utan is pontos vesszot kell rakni
    {
        atlag += b[i] // a vegere pontos vesszot kell rakni kulonben hibat ad
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
