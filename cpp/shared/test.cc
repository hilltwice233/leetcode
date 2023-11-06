#include <chrono>
#include <iostream>
#include <string>

using namespace std;

string repeat_chars(char raw, unsigned int times) {
  char handler[times + 1];
  for (int i = 0; i < times; i++) handler[i] = raw;
  return handler;
}

string pad_start(string raw, char placeholder, unsigned int length) {
  if (raw.length() >= length) return raw;
  return repeat_chars(placeholder, length - raw.length()) + raw;
}

string format3(string raw) { return pad_start(raw, ' ', 3); }

string format_duration(chrono::duration<long long, nano> duration) {
  long long time = duration.count();
  if (time < 1000) return format3(to_string(time)) + "ns ";
  time /= 1000;
  if (time < 1000) return format3(to_string(time)) + "us";
  time /= 1000;
  if (time < 1000) return format3(to_string(time)) + "ms ";
  time /= 1000;
  if (time < 60) return format3(to_string(time)) + "s  ";
  time /= 60;
  if (time < 60) return format3(to_string(time)) + "min";
  time /= 60;
  if (time < 24) return format3(to_string(time)) + "h";
  time /= 24;
  return to_string(time) + "days";
}
