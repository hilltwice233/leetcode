#ifndef __test_h
#define __test_h

#include <chrono>
#include <iostream>

using namespace std;

string format_duration(chrono::duration<long long, nano> duration);

#endif
