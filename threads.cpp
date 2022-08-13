#include <iostream>
#include <cstdlib>
#include <string>
#include <limits>
#include <vector>
#include <sstream>
#include <numeric>
#include <ctime>
#include <cmath>
#include <thread>
#include <chrono>
#include <mutex>

using namespace std;

int getRandom(int max) {
    srand(time(NULL));
    return rand() % max;
}

void executeThread(int id) {
    auto nowTime = chrono::system_clock::now();
    time_t sleepTime = chrono::system_clock::to_time_t(nowTime);
    tm myLocalTime = *localtime(&sleepTime);
    cout << "Thread " << id << " Sleep: " << ctime(&sleepTime) << endl;
    cout << "Month: " << myLocalTime.tm_mon << endl;
    cout << "Day: " << myLocalTime.tm_mday << endl;
    cout << "Year: " << myLocalTime.tm_year + 1900 << endl;
    cout << "Hours: " << myLocalTime.tm_hour << endl;
    cout << "Minutes: " << myLocalTime.tm_min << endl;
    cout << "Seconds: " << myLocalTime.tm_sec << endl;
    this_thread::sleep_for(chrono::seconds(getRandom(3)));
    nowTime = chrono::system_clock::now();
    time_t awakeTime = chrono::system_clock::to_time_t(nowTime);
    cout << "Thread " << id << " Awake Time: " << ctime(&awakeTime) << endl;
}

int main(int argc, char** argv) {

    thread th1 (executeThread, 1);
    th1.join();

    thread th2 (executeThread, 2);
    th2.join();


    return EXIT_SUCCESS;
}