// ppk.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <iomanip>
#include <locale.h> //
#include <math.h>
#include <string>


/*!
 * @brief sorts 3 numbers given by user in non descending order
*/
void order3nums()
{
    using namespace std;
    int x, y, z;

    cout << "podaj 3 liczby do posortowania: ";
    cin >> x >> y >> z;

    if (x > y) swap(x, y);
    if (y > z) swap(y, z);
    if (x > y) swap(x, y);
   
    printf("%i, %i, %i\n", x,y,z); 

}

/*!
 * @brief   does basic math on 2 user given numbers
 * @param argc count of arguments given
 * @param argw arguments from cmd
 * @return 
*/
int main(int argc, std::string argw[])
{
    order3nums();

    using namespace std;
    double x, y;
    cout << "podaj 2 liczby: ";
    cin >> x >> y;
    

    cout << "x+y = " << ((x)+ (y) ) <<"\n";
    cout << "x-y = " << ((x)- (y) ) <<"\n";
    cout << "x*y = " << ((x)* (y) ) <<"\n";
    if (y == 0)
    {
        cout << "Nie mozna dzielic przez 0\n";
        return -1;
    }
    else
        cout << "x/y = " << ((x)/ (y) ) <<"\n";

    
    cout << "*--------|--------*\n";
    cout << "|" << std::setw(7) << x << " |" << std::setw(7) << y << " |\n";
    cout << "*--------|--------*\n";


}








// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
