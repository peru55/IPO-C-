//
//  main.cpp
//  IPO
//
//  Created by El padrino on 31/08/2023.
//

#include <iostream>
#include <array>
#include <vector>
#include <format>
#include <utility>
#include <optional>
#include <initializer_list>
#include <stdexcept>

using namespace std;

//initializer list
//int makeSum(initializer_list<int> values){
//    int total {0};
//    for (int value: values){
//        total += value;
//    }
//    return total;
//}

//struct Employee {
//    char FirstInitial;
//    char LastInitial;
//    int employeeNumber;
////    default init value
//    int salary {75'000};
//};

//void printString(const string & myString)
//{
//    cout << myString << endl;
//};

//NOTE the difference in pointers and reference

//void swap(int * first, int * second)
//{
//    int temp { *first};
//    *first = *second;
//    *second = temp;
//};

//void swap(int & first, int & second)
//{
//    int temp { first};
//    first = second;
//    second = temp;
//};

//struct OddsAndEvens {
//    vector<int> odds, evens;
//};
//
//OddsAndEvens sepOddsAndEvens(const vector<int>& arr)
//{
//    vector<int> odds, evens;
//    for(int i : arr) {
//        if (i % 2 == 1){
//            odds.push_back(i);
//        } else {
//            evens.push_back(i);
//        }
//    }
//    return OddsAndEvens{ .odds = odds, .evens= evens};
//}

//exception handling
//double divideNumbers( double numerator, double denominator){
//    if (denominator == 0) {
//        throw invalid_argument( "cannot divide by 0");
//    }
//    return numerator/denominator;
//}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
//    initializing a vector
//    vector<int> myVector {11, 22};
    
//    adding value to a vector
//    myVector.push_back(33);
    
//    cout << "my Vector " << myVector << endl;
//    cout << format("1st element: {} ", myVector[1]) << endl;
    
//    pair
//    pair<double, int> myPair { 1.55, 5};
//    cout << "my first pair: " << myPair.first << endl;
//    cout << "my second pair: " << myPair.second << endl;

//    using arrays
//    array<int, 2> myArray {11, 22};
//
//    int mySecondArray [3] {1, 2, 3};
    
//    for loop through an array
//    for(int n = 0; n<3 ; n++){
//        cout << mySecondArray[n] << endl;
//    }
    
//    std optional
//    optional<int> get_data(bool giveIt)
//    {
//        if (giveIt){
//            return 42;
//        }
//        return {};
//    }
    
//    call a function with optional
//    optional<int> data1 {get_data(true)}
    
//    structured binding with a struct
//    struct Point{int a, b, c; };
//    Point point;
//    point.a = 5 ;
//    point.b = 6 ;
//    point.c = 7 ;
//    auto [x, y, z] { point };

//    cout << "x: " << x << endl;
//    cout << "y: " << y << endl;
//    cout << "z: " << z << endl;
    
//    structured binding with array
//    array<int, 3> myNewArray {1, 2, 3};
    
//    auto initializes new variables and assigns myNewArray values to them respectively
//    auto [i, j, k] {myNewArray};
//    cout << "i: " << i << endl;
//    cout << "j: " << j << endl;
//    cout << "k: " << k << endl;
    
//    structured binding with pair
//    pair<int, string> myNewPair( 5, "hello");
//    auto [number, letters] {myNewPair};
//    cout << "Number: " << number << endl;
//    cout << "Letters: " << letters << endl;
    
//    do while
//    int i {0};
//    do {
//        cout << "South Park\n";
//        i++;
//    } while (i < 10);
    
//    another for loop
//    for(int i {0}; i < 5 ; i++)
//        cout << "South Park\n";
    
//    looping through array with the range based for loop
    
//    array<int, 4> arr {1, 2, 3, 4};
//    for( int i : arr) {
//        cout << i << endl;
//    }
    
//    array arr {1, 2, 3, 5};
    
//    call init-list function
//    int a { makeSum({1,2,3})};
//    cout << "A: " << a << endl;
    
//    uniform initialization
    
//    int * myArray = new int [] {0,1,2,3};
//    cout << "Your array first index: " << myArray[1] << endl;
//    int d {3};
//    cout << d << endl;
//    Employee myEmployee {'j', 's', 600, 7500};
    
//    designated initialization
    
//    Employee myEmployee {
//        .FirstInitial = 'j';
//        .LastInitial = 's';
//        .employeeNumber = 10;
//        .salary = 7500;
//    };
    
//    allocating in free store/heap
//    int * pInt {nullptr};
//    pInt = new int;
//    changing the address of pointer
//    *pInt = 8;
//    cout << *pInt << endl;
//    deallocating from memory
//    delete pInt;
//    pInt = nullptr;
    
//    int i {8};
//    & address of or im borrowing i's value i still retains ownership
//    int * myInt {&i};
//    * yield the value of what you are borrowing
//    cout << myInt << endl;
    
//    dynamically allocating array
//    int arrSize {8};
//    NOTE new[] and delete [] for arrays
//    int * myVariableSizedArr { new int[arrSize]};
//    myVariableSizedArr[2] = 1;
//    cout << myVariableSizedArr[2] << endl;
//    brackets indicate type we are delting this case an arr
//    delete [] myVariableSizedArr;
//    myVariableSizedArr = nullptr;
    
//    int * const ip { new int[10]};
//    ip[4] = 5;
//    cout << ip[4] << endl;
    
//    int const * const ip {nullptr};
    
//    string someString {"Hello World!"};
//    printString(someString);
//    printString("Hello World");
    
//    int x {3}, y{4};
//    swap(x, y);
//    cout << swap(x, y) << endl;
    
//    vector<int> VecUnsplit {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    auto oddsAndEvens {sepOddsAndEvens(VecUnsplit)};
//    oddsAndEvens.evens;

//    eexception handling cont'd
//    try {
//        cout << divideNumbers(4.0, 0.0) << endl;
//    } catch (const invalid_argument & exception){
//        cout << "Exception caught: " << exception.what() << endl;
//    }
    
    
//    dynamic arrays
    
//    int *dynamicArray;
//    int count;
//    cout << "how many elements would you like:";
//    cin >> count;
//    dynamicArray = new int[count];
//
//    for (int n = 0 ; n < count ; n++){
//        cout << "input your element:";
//        cin >> dynamicArray[n];
//    };
//
//    cout << "These are your elements\n";
//
//    for (int i = 0 ; i < count ; i++){
//        cout << dynamicArray[i] << endl;
//    };
//
//    delete [] dynamicArray;
    
    
    return 0;
}
