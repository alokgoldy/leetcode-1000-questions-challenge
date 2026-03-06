#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <unordered_set>
#include <set>
#include <stack>
#include <queue>
#include <algorithm> // sort, reverse, binary_search, etc.
#include <numeric>   // accumulate
#include <cmath>     // pow, sqrt, abs
#include <climits>   // INT_MAX, INT_MIN

using namespace std;

/**
 * C++ STL Interview Cheat Sheet
 * This file contains common data structures and algorithms used in coding interviews.
 * You can compile and run this file to see the output of operations.
 *
 * Compilation: g++ -std=c++17 cpp_interview_cheat_sheet.cpp -o cheat_sheet
 * Execution: ./cheat_sheet
 */

void vector_demo() {
    cout << "=== Vector (Dynamic Array) ===" << endl;
    // Initialization
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2(5, 10); // size 5, all values 10

    // Basic Operations
    v.push_back(6);       // Add to end: O(1) amortized
    v.pop_back();         // Remove from end: O(1)
    
    // Access
    cout << "Front: " << v.front() << ", Back: " << v.back() << endl;
    cout << "Element at index 2: " << v[2] << endl;

    // Iteration
    cout << "Elements: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Sorting
    sort(v.begin(), v.end());                   // Ascending
    sort(v.begin(), v.end(), greater<int>());   // Descending

    // 2D Vector (Matrix)
    vector<vector<int>> matrix(3, vector<int>(4, 0)); // 3x4 matrix initialized to 0
}

void string_demo() {
    cout << "\n=== String ===" << endl;
    string s = "Hello";
    
    // Modification
    s += " World";        // Concatenation
    s.push_back('!');
    
    // Substring
    // substr(start_index, length)
    string sub = s.substr(0, 5); // "Hello"

    // Find
    size_t pos = s.find("World");
    if (pos != string::npos) {
        cout << "'World' found at index: " << pos << endl;
    }

    // Conversions
    string numStr = "123";
    int num = stoi(numStr);       // string to int
    string backToStr = to_string(num); // int to string

    // Reversing
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s << endl;
}

void map_demo() {
    cout << "\n=== Unordered Map (Hash Map) ===" << endl;
    // O(1) average time complexity for insertion, deletion, and lookup
    unordered_map<string, int> umap;

    // Insertion
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap.insert({"cherry", 3});

    // Access / Modification
    umap["apple"] += 10;

    // Check existence
    if (umap.count("banana")) { // returns 1 if present, 0 otherwise
        cout << "banana is present with value: " << umap["banana"] << endl;
    }
    
    // Find (returns iterator)
    auto it = umap.find("cherry");
    if (it != umap.end()) {
        cout << "Found cherry: " << it->second << endl;
    }

    // Iteration
    for (auto const& [key, val] : umap) {
        cout << key << ": " << val << " ";
    }
    cout << endl;

    cout << "\n=== Map (Ordered Map) ===" << endl;
    // O(log n) - Keys are sorted
    map<int, string> ordered_map;
    ordered_map[10] = "ten";
    ordered_map[1] = "one";
    ordered_map[5] = "five";

    // Will print in key order: 1, 5, 10
    for (auto const& pair : ordered_map) {
        cout << pair.first << " -> " << pair.second << " ";
    }
    cout << endl;
}

void set_demo() {
    cout << "\n=== Unordered Set (Hash Set) ===" << endl;
    // Unique elements, O(1) avg operations
    unordered_set<int> uset = {1, 2, 3, 1}; // Duplicate 1 is ignored

    uset.insert(4);
    uset.erase(2);

    if (uset.count(3)) {
        cout << "3 is in the set" << endl;
    }

    cout << "\n=== Set (Ordered Set) ===" << endl;
    // Unique elements, Sorted, O(log n)
    set<int> ordered_set = {10, 1, 5};
    
    // Iteration (Sorted order)
    for (int x : ordered_set) cout << x << " "; // Output: 1 5 10
    cout << endl;
}

void stack_queue_demo() {
    cout << "\n=== Stack (LIFO) ===" << endl;
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Top: " << s.top() << endl; // 3
    s.pop(); // removes 3
    cout << "Size: " << s.size() << endl;

    cout << "\n=== Queue (FIFO) ===" << endl;
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Front: " << q.front() << endl; // 1
    q.pop(); // removes 1
}

void priority_queue_demo() {
    cout << "\n=== Priority Queue (Heap) ===" << endl;
    
    // Max Heap (Default) - Largest element on top
    priority_queue<int> max_pq;
    max_pq.push(10);
    max_pq.push(30);
    max_pq.push(20);
    cout << "Max Heap Top: " << max_pq.top() << endl; // 30

    // Min Heap - Smallest element on top
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(10);
    min_pq.push(30);
    min_pq.push(20);
    cout << "Min Heap Top: " << min_pq.top() << endl; // 10
}

void algorithm_demo() {
    cout << "\n=== Algorithms ===" << endl;
    vector<int> v = {1, 5, 3, 2, 4, 5};

    // Min/Max Element
    auto min_it = min_element(v.begin(), v.end());
    auto max_it = max_element(v.begin(), v.end());
    cout << "Min: " << *min_it << ", Max: " << *max_it << endl;

    // Sort
    sort(v.begin(), v.end()); // 1, 2, 3, 4, 5, 5

    // Binary Search (Must be sorted)
    bool found = binary_search(v.begin(), v.end(), 3); // true

    // Lower Bound: First element >= value
    auto lb = lower_bound(v.begin(), v.end(), 3); // Iterator to first 3
    
    // Upper Bound: First element > value
    auto ub = upper_bound(v.begin(), v.end(), 3); // Iterator to 4

    cout << "Count of 5: " << count(v.begin(), v.end(), 5) << endl;

    // Accumulate (Sum)
    int sum = accumulate(v.begin(), v.end(), 0); // 0 is initial value
    cout << "Sum: " << sum << endl;
    
    // Next Permutation
    string s = "abc";
    next_permutation(s.begin(), s.end()); // "acb"
    cout << "Next permutation of abc: " << s << endl;
}

void pair_demo() {
    cout << "\n=== Pair ===" << endl;
    pair<int, string> p = {1, "Alice"};
    cout << p.first << ": " << p.second << endl;
    
    vector<pair<int, int>> v_pairs;
    v_pairs.push_back({1, 2});
    v_pairs.emplace_back(3, 4);
}

int main() {
    vector_demo();
    string_demo();
    map_demo();
    set_demo();
    stack_queue_demo();
    priority_queue_demo();
    algorithm_demo();
    pair_demo();
    return 0;
}