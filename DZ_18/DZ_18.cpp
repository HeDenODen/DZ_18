#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void matrix(int i_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    int i_ar[size1][size2];
    srand(time(0));
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            i_ar[i][j] = -20 + rand() % 41;
            cout << i_ar[i][j] << " ";
        }
    }
    cout << endl;
}
void matrix(float f_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    float f_ar[size1][size2];
    srand(time(0));
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            f_ar[i][j] = -20 + rand() % 41;
            cout << f_ar[i][j] << " ";
        }
    }
    cout << endl;
}
void matrix(char c_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    char c_ar[size1][size2];
    srand(time(0));
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            c_ar[i][j] = 21 + rand() % 79;
            cout << c_ar[i][j] << " ";
        }
    }
    cout << "\n\n";
}
void enter_matrix(int i_a)
{
    const int size1 = 3;
    const int size2 = 3;
    int i_ar[size1][size2] = { { -2, 7, -18,}, { 8, 14, -8 }, { 11, -15, -11} };
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << i_ar[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void enter_matrix(float f_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    float f_ar[size1][size2] = { { -2.2, 4.2, -17.1,}, { 8.9, 11.4, -5.1 }, { 11.5, -15.2, -1.3} };
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << f_ar[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void enter_matrix(char c_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    char c_ar[size1][size2] = { {'&','%','A'}, {'#', '!', '@'}, {'D', '*', 'S'}};
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            cout << c_ar[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}
void minmax_matrix(int i_a)
{
    const int size1 = 3;
    const int size2 = 3;
    int i_ar[size1][size2] = { { -2, 7, -18,}, { 8, 14, -8 }, { 11, -15, -11} };
    int min = i_ar[0][0];
    int max = i_ar[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (i_ar[i][j] < min && i == j)
                min = i_ar[i][j];
            if (i_ar[i][j] > max && i == j)
                max = i_ar[i][j];
        }
    }
    cout << "Min = " << min << "\nMax = " << max << "\n";;
}
void minmax_matrix(float f_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    float f_ar[size1][size2] = { { -2.2, 4.2, -17.1,}, { 8.9, 11.4, -5.1 }, { 11.5, -15.2, -1.3} };
    float min = f_ar[0][0];
    float max = f_ar[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if(f_ar[i][j] < min && i==j)
                min = f_ar[i][j];
            if (f_ar[i][j] > max && i == j)
                max = f_ar[i][j];
        }
    }
    cout << "Min = " << min << "\nMax = " << max << "\n";;
}
void minmax_matrix(char c_arr)
{
    const int size1 = 3;
    const int size2 = 3;
    char c_ar[size1][size2] = { {'&','%','A'}, {'#', '!', '@'}, {'D', '*', 'S'} };
    char min = c_ar[0][0];
    char max = c_ar[0][0];
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (c_ar[i][j] < min && i == j)
                min = c_ar[i][j];
            if (c_ar[i][j] > max && i == j)
                max = c_ar[i][j];
        }
    }
    cout << "Min = " << min << "\nMax = " << max << "\n";;
}

int main()
{
    //1
    int i_ar = 0;
    matrix(i_ar);
    float d_ar = 0;
    matrix(d_ar);
    char c_ar = 0;
    matrix(c_ar);
    //2
    enter_matrix(i_ar);
    enter_matrix(d_ar);
    enter_matrix(c_ar);
    //3
    minmax_matrix(i_ar);
    minmax_matrix(d_ar);
    minmax_matrix(c_ar);
    return 0;
}
