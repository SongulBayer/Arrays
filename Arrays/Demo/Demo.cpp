#include <iostream>
#include <algorithm>  
using namespace std;
int main()
{
    char dizi[40];//Bunun yerine string dizi;
    int sayac = 0 , temp;

    cout << "Lutfen bir sayi giriniz" << endl;
    cin >> dizi;

    while (dizi[sayac]!='\0')//bu döngü yerine de sayac=dizi.length yazabiliriz.
    {
        sayac++;
    }
    int i = 0, j = 0;
    while (i<sayac-1)
    {
        j = i + 1;
        while (j<sayac)
        {
            if (dizi[i]>dizi[j])
            {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
            j++;
        }
        i++;
    }
    cout << dizi << endl;
    
}
