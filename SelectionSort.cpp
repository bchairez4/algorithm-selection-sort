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
#include <utility>  //std::swap()

template <class T>
void SelectionSort(std::vector<T>& array) {
    for (int i = 0; i < array.size()-1; ++i) {

        int min_index = i;
        
        for (int j = i+1; j < array.size(); ++j) {
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }

        if (i != min_index) {
            std::swap(array[i], array[min_index]);
        }
    }
}
