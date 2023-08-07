//
// Created by Manoloon on 07/03/2022.
//
/**
 * Instructions
Implement a binary search algorithm.
Searching a sorted collection is a common task. A dictionary is a sorted list of word definitions. Given a word,
 one can find its definition. A telephone book is a sorted list of people's names, addresses, and telephone numbers.
 Knowing someone's name allows one to quickly find their telephone number and address.
If the list to be searched contains more than a few items (a dozen, say) a binary search will require far fewer
 comparisons than a linear search, but it imposes the requirement that the list be sorted.
In computer science, a binary search or half-interval search algorithm finds the position of a specified input
 value (the search "key") within an array sorted by key value.
In each step, the algorithm compares the search key value with the key value of the middle element of the array.
If the keys match, then a matching element has been found and its index, or position, is returned.
Otherwise, if the search key is less than the middle element's key, then the algorithm repeats its action on
 the sub-array to the left of the middle element or, if the search key is greater, on the sub-array to the right.
If the remaining array to be searched is empty, then the key cannot be found in the array and a special "not found"
 indication is returned.
A binary search halves the number of items to check with each iteration, so locating an item
 (or determining its absence) takes logarithmic time. A binary search is a dichotomic divide and conquer search algorithm.

 */
#ifndef EXERCISM_BINARY_SEARCH_H
#define EXERCISM_BINARY_SEARCH_H
#include <vector>

namespace binary_search
{
    //return the position if the item was found
    std::size_t find(const std::vector<int> & data,int item);
    std::size_t findSorted(std::vector<int>data,int item);
    std::size_t findSimple(std::vector<int> data,int item);
}
/**
 *  const std::vector<int> data {6};
    const std::size_t actual = binary_search::find(data, 6);
    const std::size_t expected = 0;

    const std::vector<int> data {1, 3, 4, 6, 8, 9, 11};
    const std::size_t actual = binary_search::find(data, 6);
    const std::size_t expected = 3;
 */

#endif //EXERCISM_BINARY_SEARCH_H
