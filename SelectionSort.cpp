/*****************************************************************************
*    Brian Chairez
*
*    Selection Sort Algorithm
*        Time Complexity:
*            Worst Case: O(n^2)
*            Average Case: O(n^2)
*        Space Complexity:
*            O(1) (in-place)
*****************************************************************************/

#include <vector>

template <class T>
void SelectionSort(std::vector<T>& array) {
    // i is current index of the sorted array
    for (int i = 0; i < array.size()-1; ++i) {

        int min_index = i;
        
        // j is the current index of the unsorted array
        for (int j = i+1; j < array.size(); ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        // swap the next smallest element if found this iteration
        if (i != min_index) {
            T temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}
