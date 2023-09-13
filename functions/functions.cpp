//Задание 2. Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

#include <iostream>
using namespace std;

float average(int arr[], int SIZE) {
    float x = 0;

    for (int i = 0; i < SIZE; i++) {
        x += arr[i];
    }

    x /= SIZE;
    return x;
}

int main() {
    int arr[] = { 1,2,3,4,5,6 };
    const int SIZE = 6;

    float value = average(arr, SIZE);

    cout << value << endl;

    return 0;
}

//Задание 3. Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива

//разкоментируйте что бы код заработал 

/*\
* #include <iostream>
using namespace std;

void average(int arr[], int SIZE) {
   
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (arr[i]>0)
        {
            positive++;
        }
        else if(arr[i]<0)
        {
            negative++;
        }
        else 
        {
            zero++;
        }
    }
    cout << positive << endl;
    cout << negative << endl;
    cout << zero << endl;
}

int main() {
    int arr[] = { 1,-2,3,4,-5,6,0,9,0 };
    const int SIZE = 9;

    average(arr, SIZE);

    return 0;
}

*/

