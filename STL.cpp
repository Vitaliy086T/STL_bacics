#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    //vector
    vector <int> v = {1, 2, 3, 4, 5}; //dynamic array, elements by index
    for(int num : v){
        cout << num << ' ';
    }
    cout << endl;

    //list
    list <int> l = {6, 7, 8}; //elements not by index, but more flexible than vector
    l.remove(6); // l = {7, 8}
    
    //deque
    deque <int> d = {9, 10}; //added by front + back
    d.push_front(11);
    d.pop_back(); // d = {11, 9}

    //Associative containers

    //set and multiset
    set <int> s = {2, 3, 1, 1, 2}; //unique for set and sorted
    multiset <int> ms = {2, 3, 1, 1, 2};
    s.insert(2); //s = {1, 2, 3} //ms = {1, 1, 2, 2, 3}

    //map and multimap
    map <string, int> m = {{"apple", 2}, {"banana", 3}}; //pair of keys and values
    m["orange"] = 4;
    for (const auto& pair : m){
        cout << pair.first << " " << pair.second << " ";
    }
    multimap <string, int> mm = {{"apple", 2}, {"apple", 5}, {"banana", 3}};
    for (const auto& pair : mm){
        cout << pair.first << " " << pair.second << " ";
    }
    //unordered_set and unordered_map - same, but not sorted
    //stack (LIFO) and queue(FIFO) - algorithms

    //Algorithms (need #include <iterator> and <algorithm>)

    //find - search elements
    int it1 = find(v.begin(), v.end(), 3); //true
    //sort
    int it2 = sort(d.begin(), d.end()); //d now = {9, 11}
    //copy
    copy
    return 0;
}