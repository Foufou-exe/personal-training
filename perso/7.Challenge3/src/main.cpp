/* Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty integer vectors named respectively
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector 1 dynamically using push_back
    Display the elements of vector 1 using the at() method and its size using the size() method.
    
    Add 100 and 200 to vector 2 dynamically using push_back
    Display the elements of vector 2 using the at() method and its size using the size() method.

    Declare an empty 2D vector called vector_2d
    Remember that a 2D vector is a vector of vector<int>.
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements of vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements of vector_2d again using the at() method
    
    Display the elements of vector1
    
    What did you expect? Did you get what you expected? What do you think happened?
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Declare 2 empty integer vectors named respectively
    vector <int> vector1;
    vector <int> vector2;

    // Add 10 and 20 to vector 1 dynamically using push_back
    vector1.push_back(10);
    vector1.push_back(20);

    // Display the elements of vector 1 using the at() method and its size using the size() method.
    cout << "The first element of vector 1 is:" << vector1.at(0) << endl;
    cout << "The second element of vector 1 is:" << vector1.at(1) << endl;
    cout << "The size of vector 1 is: " << vector1.size() << endl;

    // Add 100 and 200 to vector 2 dynamically using push_back
    vector2.push_back(100);
    vector2.push_back(200);

    // Display the elements of vector 2 using the at() method and its size using the size() method
    cout << "The first element of vector 2 is:" << vector2.at(0) << endl;
    cout << "The second element of vector 2 is: " << vector2.at(1) << endl;
    cout << "The size of vector 2 is: " << vector2.size() << endl;

    // Declare an empty 2D vector called vector_2d
    vector <vector<int>> vector_2d;

    // Add vector1 to vector_2d dynamically using push_back
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);


    // Display the elements of vector_2d using the at() method
    cout << "The first element of the 2D vector is:" << vector_2d.at(0).at(0) << endl;
    cout << "The second element of the 2D vector is:" << vector_2d.at(0).at(1) << endl;
    cout << "The third element of the 2D vector is:" << vector_2d.at(1).at(0) << endl;
    cout << "The fourth element of the 2D vector is: " << vector_2d.at(1).at(1) << endl;

    // Change vector1.at(0) to 1000
    vector1.at(0) = 1000;

    // Display the elements of vector_2d again using the at() method
    cout << "The first element of the 2D vector is:" << vector_2d.at(0).at(0) << endl;
    cout << "The second element of the 2D vector is:" << vector_2d.at(0).at(1) << endl;
    cout << "The third element of the 2D vector is:" << vector_2d.at(1).at(0) << endl;
    cout << "The fourth element of the 2D vector is: " << vector_2d.at(1).at(1) << endl;

    // Display the elements of vector1
    cout << "The first element of vector 1 is:" << vector1.at(0) << endl;
    cout << "The second element of vector 1 is: " << vector1.at(1) << endl;

    cout << "The size of vector 1 is: " << vector1.size() << endl;

    // What did you expect? Did you get what you expected? What do you think happened?
    /*
        I expected the first element of the 2D vector to be 1000 and not 10.
        I got what I expected.
        I think that the first element of the 2D vector is always 10 because the 2D vector is a vector of vectors of integers.
        The first element of the 2D vector is therefore a vector of integers and not an integer.
        The first element of the 2D vector is therefore a pointer to the first element of the vector 1.
        The first element of the 2D vector is therefore always 10.
    */

    return 0;
}

