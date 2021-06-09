#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vector1;
    vector<int> vector2;
    vector<vector<int>> vector_2d;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Vector1 [0] has: " << vector1.at(0)
         << "\nVector1 [1] has: " << vector1.at(1)
         << "\nVector1's size is: " << vector1.size() << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "\nVector2 [0] has: " << vector2.at(0)
         << "\nVector2 [1] has: " << vector2.at(1)
         << "\nVector2's size is: " << vector2.size() << endl;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "\nVector_2d [0][0] has: " << vector_2d[0].at(0)
         << "\nVector_2d [0][1] has: " << vector_2d[0].at(1)
         << "\nVector_2d [1][0] has: " << vector_2d[1].at(0)
         << "\nVector_2d [1][1] has: " << vector_2d[1].at(1) << endl;

    vector1.at(0) = {1000};

    cout << "\nVector_2d [0][0] has: " << vector_2d[0].at(0)
         << "\nVector_2d [0][1] has: " << vector_2d[0].at(1)
         << "\nVector_2d [1][0] has: " << vector_2d[1].at(0)
         << "\nVector_2d [1][1] has: " << vector_2d[1].at(1) << endl;

    cout << "\nVector1 [0] has: " << vector1.at(0)
         << "\nVector1 [1] has: " << vector1.at(1) << endl;

    return 0;
}