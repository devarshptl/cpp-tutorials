#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <deque>
#include <iterator>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <stack>
#include <queue>

using namespace std;

int main(int argc, char** argv) {

    deque<int> nums = {1, 2, 3, 4};
    nums.push_front(0);
    nums.push_back(5);

    for(int x: nums)
        cout << x << endl;

    cout << nums[0] << endl;

    vector<int> nums2 = {1, 2, 3, 4};

    vector<int>::iterator itr;
    for(itr=nums2.begin(); itr < nums2.end(); itr++)
        cout << *itr << endl;

    auto itr2 = nums.begin();
    advance(itr2, 2);
    cout << *itr2 << endl;

    auto itr3 = next(itr2, 1);
    cout << *itr3 << endl;

    auto itr4 = prev(itr2, 1);
    cout << *itr4 << endl;

    vector<int> nums3 = {1, 4, 5, 6};
    vector<int> nums4 = {2, 3};
    auto itr5 = nums3.begin();
    advance(itr5, 1);
    copy(nums4.begin(), nums4.end(), inserter(nums3, itr5));
    for(int &i: nums3)
        cout << i << endl;

    // deque
    deque<int> deque1;
    deque1.push_back(5);
    deque1.push_front(1);
    deque1.assign({11, 12}); // replace
    cout << "Size: " << deque1.size() << endl;
    cout << deque1[0] << endl;
    cout << deque1.at(1) << endl;
    deque<int>::iterator it = deque1.begin() + 1;
    deque1.insert(it, 3);
    int tempArr[5] = {6,7,8,9,0};
    deque1.insert(deque1.end(), tempArr, tempArr+5);
    deque1.erase(deque1.end());
    deque1.erase(deque1.begin(), deque1.begin() + 2);
    deque1.pop_front();
    deque1.pop_back();
    deque<int> deque2(2, 50);
    deque1.swap(deque2);
    deque1.clear();
    for(int i: deque1)
        cout << i << endl;


    // list - cannot access direct index
    int arr[5] = {1, 2, 3, 4, 5};
    list<int> list1;
    list1.insert(list1.begin(), arr, arr + 5);
    list1.assign({10 ,11, 12});
    list1.push_back(5);
    list1.push_front(1);
    cout << "List Size: " << list1.size() << endl;
    list<int>::iterator it2 = list1.begin();
    advance(it2, 1);
    cout << "Second Index: " << *it2 << endl;
    it2 = list1.begin();
    list1.insert(it2, 8);
    list1.erase(list1.begin());
    list<int>::iterator it3 = list1.begin();
    advance(it3, 2);
    list1.erase(it2, it3);
    list1.pop_back();
    list1.pop_front();
    int ar2[6] = {1, 2, 3, 4, 5, 5};
    list<int> list2;
    list2.insert(list2.begin(), ar2, ar2+5);
    list2.sort();
    list2.reverse();
    list2.unique();
    list2.remove(5);
    list2.remove_if([](int x){return x%2==0;});
    list1.merge(list2);
    for(int i: list1)
        cout << i << endl;

    // forward list
    forward_list<int> fl1;
    fl1.assign({1, 2, 3, 4});
    fl1.push_front(0);
    fl1.pop_front();
    cout << "Front: " << fl1.front() << endl;
    forward_list<int>::iterator it4 = fl1.begin();
    it4 = fl1.insert_after(it4, 5);
    fl1.emplace_front(6);
    fl1.remove(6);
    forward_list<int> fl2;
    fl2.assign({8, 7, 6, 6});
    fl2.unique();
    fl2.sort();
    fl2.reverse();
    fl1.merge(fl2);
    for(int i: fl1) {
        cout << i << endl;
    }
    fl1.clear();

    // set
    set<int> set1 = {5, 4, 3, 2, 1, 1};
    cout << "Set size: " << set1.size() << endl;
    set1.insert(0);
    set<int>::iterator its = set1.begin();
    its++;
    cout << "Set 2nd: " << *its << endl;
    set1.erase(5);
    its = set1.end();
    advance(its, -1);
    set1.erase(its, set1.end());
    int arrs[] = {6,7,8,9};
    set1.insert(arrs, arrs+4);
    auto val = set1.find(6);
    cout << "Found in Set: " << *val << endl;
    auto eight = set1.lower_bound(8);
    cout << "8 " << *eight << endl;
    auto nine = set1.upper_bound(8);
    cout << "9 " << *nine << endl;
    set<int> set2 {10, 11};
    set1.swap(set2);
    for(int i: set1) cout << i << endl;

    // multiset
    multiset<int> mset1 {1, 2, 2, 3, 4};
    mset1.insert(4);
    mset1.insert(0);
    if(!mset1.empty()) {
        for(int i: mset1)
            cout << i << endl;
    }

    // map
    map<int, string> map1;
    map1.insert(pair<int, string> (1, "Hello"));
    map1.insert(pair<int, string> (2, "World"));
    map1.insert(pair<int, string> (3, "Lisa"));
    auto match = map1.find(1);
    cout << match->second << endl;
    auto hello = map1.lower_bound(1);
    cout << "LB: " << hello->second << endl;
    auto lisa = map1.upper_bound(1);
    cout << "UB: " << lisa->second << endl;
    map<int, string>::iterator mit;
    for(mit = map1.begin(); mit != map1.end(); ++mit) {
        cout << "Key: " << mit->first << endl;
        cout << "Value: " << mit->second << endl;
    }

    // stack
    stack<int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    cout << "Stack Size: " << stk.size() << endl;
    int ssize = stk.size();
    if(!stk.empty()) {
        for(int i=0; i< ssize; i++) {
            cout << stk.top() << endl;
            stk.pop();
        }
    }

    // queue
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    int qsize = q.size();
    if(!q.empty()) {
        for(int i=0; i< qsize; i++) {
            cout << q.front() << endl;
            q.pop();
        }
    }

    // priority queue
    priority_queue<int> pque;
    pque.push(4);
    pque.push(8);
    pque.push(5);
    int psize = pque.size();
    if (!pque.empty()) {
        for (int i = 0; i < psize; ++i) {
            cout << pque.top() << endl;
            pque.pop();
        }
    }

    enum day {Mon=1, Tue, Wed, Thu, Fri};
    enum day tuesday = Tue;
    cout << "Tuesday is the " << tuesday << "nd day of the week" << endl;
    for(int i=Mon; i<= Fri; i++) {
        cout << i << endl;
    }

    return EXIT_SUCCESS;
}