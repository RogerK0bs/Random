#include <iostream>
#include <time.h>
using namespace std;
void sort(int mass[], int a)
{
    cout << "\n—ортировка массива в пор€дке возрастани€:\n";
    for (size_t i = 0; i < a; i++)
    {
        for (size_t j = 0; j < a - 1; j++)
        {
            if (mass[j] > mass[j + 1])
            {
                int buffer = mass[j];
                mass[j] = mass[j + 1];
                mass[j + 1] = buffer;
            }
        }
    }
    int transfer=0;
            for (size_t i = 0; i < a; i++)
            {
               
                cout << mass[i] << "\t";
                transfer++;
                if (transfer % 16 == 0)cout << endl;
        }

}


int main()
{  
    srand(time(NULL));
    setlocale(LC_ALL, "");
    int* arr;
    int N;
    cout << "¬ведите длину массива = "; cin >> N;
    arr = new int[N];
    int min_dip, max_dip;
    cout << "\n¬ведите минимальный диапозон = "; cin >> min_dip;
    cout << "\n¬ведите максимальный диапозон = "; cin >> max_dip;
    const int n = 5;
    for (size_t i = 0; i < N; i++)
    {
        do
        {
            arr[i] =rand()%max_dip;
        } while (arr[i]<min_dip); 
    }
    cout << endl; 
    int transfer = 0;
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << "\t";
        transfer++;
        if (transfer % 16 == 0)cout << endl;
    }
        sort(arr, N); 
}
