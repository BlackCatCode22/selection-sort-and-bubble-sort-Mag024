/* Miguel Gomez

Monday 10/23/23 1023

CIT-66-16270
*/

#include <iostream>

using namespace std;


  void bubblesort (int array[], int size){

    for (int i = 0; i < size - 1; i++){
        for (int j = 0; j < size - i - 1; j++){
            if (array [j] > array [j+1]) {
                    //swap elements
                int temp = array[j];
                array [j] = array[j+1];
                array[j+1] = temp;
                }
            }
        }

    }

    void selectionsort(int array[], int size) {
        for (int i = 0; i < size - 1; i++){
            int minIndex = i;

        for (int j = i + 1; j < size; j++){
            if (array[j] < array[minIndex]){
                minIndex = j;
                }
            }
            // swap elements 1159
            int temp = array[i];
            array[i] = array[minIndex];
            array[minIndex] = temp;
        }

    }


int main()
{
    cout << "Hello world! 10/23/23 11:14AM Monday CIT-66-16270" << endl;

   /* const data = ['A', 'B', 'C']
    const out = []


        for (let i =0; i < data.length; i++){
            out[i] = data [i]
                for (let j = 0; j < data.length; j++){
        }
    }
    O(n^2)
    */

    // bubble sort = pairs of adjacent elements compared, and the elements swapped if they are not in order.

    //Quadratic time O(n^2)
    //small data set= okay-ish
    //Large data - no, TMI



    // 1049 public static void main(String[] args){

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof (array[0]);

    //extra info from chatgpt 1049

    cout << "original array: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << endl;
// change these underneath add some information 1051 Bubblesort
    bubblesort(array, size);

//added cout
cout << "Bubble Sorted array: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
        }
        cout << endl;

// reset array 1202
int selectionArray[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

//Selection sort
selectionsort(selectionArray, size);

cout << "Selection Sorted array: ";
for (int i = 0; i < size; i++){
    cout << selectionArray[1] << " ";
}

cout << endl;

    return 0;
}
