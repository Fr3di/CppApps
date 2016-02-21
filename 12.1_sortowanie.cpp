#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

void bubbleSort(int *array, int elements)
{
	clock_t start, stop;
	
	start = clock();
	
	for( int i = 0; i < elements; i++ )
    {
        for( int j = 0; j < elements - 1; j++ )
        {
            if( array[ j ] > array[ j + 1 ] )
                 swap( array[ j ], array[ j + 1 ] );
           
        }
    }
    stop = clock();
    cout << stop-start << endl;
    
//        for( int i = 0; i < elements; i++ )
//    {
//        cout << array[i] << endl;
//    }
    
}


void insertionSort(int *array, int elements)
{
	int temp, j;
	
	clock_t start, stop;
	
	start = clock();
   
    for( int i = 1; i < elements; i++ )
    {
        temp = array[ i ];
       
        for( j = i - 1; j >= 0 && array[ j ] > temp; j-- )
             array[ j + 1 ] = array[ j ];
       
        array[ j + 1 ] = temp;
    }
    
    stop = clock();
    cout << stop-start << endl;
}


void selectionSort(int *array, int elements)
{
	int k;
	
	clock_t start, stop;
	
	start = clock();
	
    for( int i = 0; i < elements; i++ )
    {
        k = i;
        for( int j = i + 1; j < elements; j++ )
        if( array[ j ] < array[ k ] )
             k = j;
       
        swap( array[ k ], array[ i ] );
    }
    
    stop = clock();
    cout << stop-start << endl;
}


int main()
{
	const int elements = 10000;
	int array[elements];
	int insertion[elements];
	int selection[elements];
	int bubble[elements];

	srand(time(NULL));
	
	for (int c = 0; c < elements; c++)
		array[c] = rand() % 1000;
	
	memcpy(insertion, array, elements * sizeof(array[0]));
	memcpy(selection, array, elements * sizeof(array[0]));
	memcpy(bubble, array, elements * sizeof(array[0]));
	
	selectionSort(selection, elements);
	insertionSort(insertion, elements);
	bubbleSort(bubble, elements);

	return 0;
}
