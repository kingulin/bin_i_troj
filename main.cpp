#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n, m, temp = 0, k ;
float x;
vector < int > tab;

void bin()
{
    cout << "Podaj liczbe" << endl;
    cin >> n;

    while(n != 0)
    {
        if(n%2 == 1)
        {
            tab.push_back(1);
        }
        else
        {
            tab.push_back(0);
        }
        n /= 2;

    }
    reverse(tab.begin(), tab.end());

    for(int i = 0; i < tab.size(); i++)
    {
        cout << tab[i];
        if(tab[i] == 1)
        {
            temp+=1;
        }
        else
        {
            if(m<temp)
            {
                m = temp;
            }
            temp = 0;
        }
    }

    cout << "\n" << m << endl;
}

void troj()
{


    cout << "podaj swoja liczba w zakresie od 0 do 1 " << endl;
    cin >>x ;

    while(x< 0 || x>1)
    {

        cout << "podaj liczbe jeszcze raz jeeszcze raz" << endl;
        cin >>x ;
    }

    cout << "podaj ile liczb po przecinku ma byc " << endl;
    cin >> k;
    cout << "0,";


    for(int i = 1; i <= k; i++ )
    {
        if(x>=(float)2 / 3)
        {
            cout<< "2";
        }
        else if(x >= (float)1/3)
        {
            cout<< "1";
        }
        else
        {
            cout<< "0";

        }
        x *= 3;
        if(x >= 2)
        {
            x -=2;
        }
        else if(x >= 1)
        {
            x-=1;
        }
    }
}

int main()
{
    bin();
    troj();


    return 0;
}

