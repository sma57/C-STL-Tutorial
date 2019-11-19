// Vector in C++ STL
// Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container. 
// Vector elements are placed in contiguous storage so that they can be accessed and traversed using iterators. In vectors, data is inserted at the end. Inserting at the end takes differential time, as sometimes 
// there may be a need of extending the array. Removing the last element takes only constant time because no resizing happens. Inserting and erasing at the beginning or in the middle is linear in time.



//Certain functions associated with the vector are:
//Iterators

//begin() – Returns an iterator pointing to the first element in the vector
//end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
//rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
//cbegin() – Returns a constant iterator pointing to the first element in the vector.
//cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
//crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
//crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)


// C++ program to illustrate the 
// iterators in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Output of begin and end: "; 
	for (auto i = g1.begin(); i != g1.end(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of cbegin and cend: "; 
	for (auto i = g1.cbegin(); i != g1.cend(); ++i) 
		cout << *i << " "; 

	cout << "\nOutput of rbegin and rend: "; 
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir) 
		cout << *ir << " "; 

	cout << "\nOutput of crbegin and crend : "; 
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir) 
		cout << *ir << " "; 

	return 0; 
} 

//Output:
//Output of begin and end: 1 2 3 4 5 
//Output of cbegin and cend: 1 2 3 4 5 
//Output of rbegin and rend: 5 4 3 2 1 
//Output of crbegin and crend : 5 4 3 2 1
//=====================================================

//Capacity

//size() – Returns the number of elements in the vector.
//max_size() – Returns the maximum number of elements that the vector can hold.
//capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
//resize(n) – Resizes the container so that it contains ‘n’ elements.
//empty() – Returns whether the container is empty.
//shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
//reserve() – Requests that the vector capacity be at least enough to contain n elements.

// C++ program to illustrate the 
// capacity function in vector 
#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 5; i++) 
		g1.push_back(i); 

	cout << "Size : " << g1.size(); 
	cout << "\nCapacity : " << g1.capacity(); 
	cout << "\nMax_Size : " << g1.max_size(); 

	// resizes the vector size to 4 
	g1.resize(4); 

	// prints the vector size after resize() 
	cout << "\nSize : " << g1.size(); 

	// checks if the vector is empty or not 
	if (g1.empty() == false) 
		cout << "\nVector is not empty"; 
	else
		cout << "\nVector is empty"; 

	// Shrinks the vector 
	g1.shrink_to_fit(); 
	cout << "\nVector elements are: "; 
	for (auto it = g1.begin(); it != g1.end(); it++) 
		cout << *it << " "; 

	return 0; 
} 

//Output:
//Size : 5
//Capacity : 8
//Max_Size : 4611686018427387903
//Size : 4
//Vector is not empty
//Vector elements are: 1 2 3 4
//=====================================================

//Element access:

//reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
//at(g) – Returns a reference to the element at position ‘g’ in the vector
//front() – Returns a reference to the first element in the vector
//back() – Returns a reference to the last element in the vector
//data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.


// C++ program to illustrate the 
// element accesser in vector 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
	vector<int> g1; 

	for (int i = 1; i <= 10; i++) 
		g1.push_back(i * 10); 

	cout << "\nReference operator [g] : g1[2] = " << g1[2]; 

	cout << "\nat : g1.at(4) = " << g1.at(4); 

	cout << "\nfront() : g1.front() = " << g1.front(); 

	cout << "\nback() : g1.back() = " << g1.back(); 

	// pointer to the first element 
	int* pos = g1.data(); 

	cout << "\nThe first element is " << *pos; 
	return 0; 
} 

//Output:
//Reference operator [g] : g1[2] = 30
//at : g1.at(4) = 50
//front() : g1.front() = 10
//back() : g1.back() = 100
//The first element is 10