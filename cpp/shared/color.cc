#include <iostream>
#include <string>

using namespace std;

string dim(string raw) { return "\033[90m" + raw + "\033[0m"; }
string red(string raw) { return "\033[91m" + raw + "\033[0m"; }
string yellow(string raw) { return "\033[93m" + raw + "\033[0m"; }
string green(string raw) { return "\033[92m" + raw + "\033[0m"; }
string cyan(string raw) { return "\033[96m" + raw + "\033[0m"; }
string blue(string raw) { return "\033[94m" + raw + "\033[0m"; }
string magenta(string raw) { return "\033[95m" + raw + "\033[0m"; }
