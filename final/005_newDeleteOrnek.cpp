#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Matris satır sayısını girin: ";
    cin >> rows;
    cout << "Matris sütun sayısını girin: ";
    cin >> cols;

    if (rows <= 0 || cols <= 0)
    {
        cout << "Geçersiz boyutlar." << endl;
        return 0;
    }

    // İki boyutlu dinamik dizi oluşturma
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new int[cols];
    }

    // Kullanıcıdan matris elemanlarını alma
    cout << "Matris elemanlarını girin:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Eleman [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Transpozeyi hesaplama ve yazdırma
    cout << "Transpoze matris:" << endl;
    for (int j = 0; j < cols; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    // Belleği serbest bırakma
    for (int i = 0; i < rows; i++)
    {
        delete[] matrix[i]; // Her satır için bellek serbest bırak
    }
    delete[] matrix; // Satır dizisi için bellek serbest bırak
    return 0;
}