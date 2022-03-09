#include <iostream>
#include <cstdlib>
#include <time.h>

void Sortowanie_Babelkowe(int* tab, int n, int a, int b, int tryb)
{
    // Alokacja + wypisanie tablicy 
    tab = new int [n];

    for ( int i = 0 ; i < n ; i ++ )
    {
        tab[i] = rand()%(a-b+1)+a;
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    }std::cout<<std::endl;

    // Sortowanie

    for ( int i = 0 ; i < n ; i ++ )
    {
        for ( int j = i + 1 ; j < n ; j ++)
        {
            if( tab[i]>tab[j])
                std::swap(tab[i],tab[j]);
        }
    }

    // Wypisywanie

    for ( int i = 0 ; i < n ; i ++)
    {
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    } std::cout<<std::endl;

    delete [] tab;
}

void Sortowanie_wybor(int* tab, int n, int a, int b, int tryb)
{
     // Alokacja + wypisanie tablicy 
    tab = new int[n];

    for ( int i = 0 ; i < n ; i ++ )
    {
        tab[i] = rand()%(a-b+1)+a;
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    }std::cout<<std::endl;
    
    // Sortowanie
    for( int i = 0 ; i < n - 1  ; i ++ )
    {
        int min = tab[i];
        {
            for(int j = i+1 ; j < n; j ++ )
            {
                if ( min > tab[j])
                {
                    min = tab[j];
                    std::swap(tab[i],tab[j]);
                }
                            
            }
        }
        
    }
    // Wypisywanie

    for ( int i = 0 ; i < n ; i ++)
    {
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    } std::cout<<std::endl;


    delete [] tab;
}

void Sortowanie_wstawianie(int* tab, int n, int a, int b, int tryb)
{
        // Alokacja + wypisanie tablicy 
    tab = new int[n];

    for ( int i = 0 ; i < n ; i ++ )
    {
        tab[i] = rand()%(a-b+1)+a;
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    }std::cout<<std::endl;
    
        // Sortowanie
    for(int i = 0 ; i < n ; i ++)
    {
        int min_index = 0;
        for( int j = i + 1 ; j < n ; j ++)
        {
            if(tab[min_index] > tab[j])
            {
                min_index = j;
            }
            std::swap(tab[i],tab[min_index]);
        }
    }
        // Wypisywanie

    for ( int i = 0 ; i < n ; i ++)
    {
        std::cout<<"TAB[" << i << "]= " << tab[i] << " ";
    } std::cout<<std::endl;


    delete [] tab;
}



int main(){
    srand(time(NULL));

    int* tab_n = nullptr;
    
    int zadanie;

    const int a = 1, b = 9, n = 5, tryb = 1;

    do{
    std::cout<<"Wybierz zadanie:\n";
    std::cout<<"1 - > Sortowanie Babelkowe\n";
    std::cout<<"2 - > Sortowanie przez wybor \n";
    std::cout<<"3 - > Sortowanie przez wstawianie\n";
    std::cout<<"4 - > Sortowanie na tablicy dwuwymiarowej.\n";
    std::cout<<"Zadanie: ";
    std::cin>>zadanie;
    }while(zadanie<0||zadanie>5);

    switch(zadanie){
        case 1:
        Sortowanie_Babelkowe(tab_n, n, a, b, tryb);
        break;
        case 2:
        Sortowanie_wybor(tab_n, n, a, b, tryb);
        case 3:
        break;
        Sortowanie_wstawianie(tab_n,n, a,b, tryb);
        break;
        default:
        std::cout<<"Podales liczbe spoza zakresu";
    }


    return 0;
}