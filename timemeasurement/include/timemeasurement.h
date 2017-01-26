#ifndef TIMEMEASUREMENT_H
#define TIMEMEASUREMENT_H

#include <chrono>

class Timemeasurement
{
public:
  Timemeasurement();
  ~Timemeasurement();
  void start_time();
  void stop_time();
  long int get_microsec_time();

private:
  std::chrono::time_point<std::chrono::system_clock> start;
  std::chrono::time_point<std::chrono::system_clock> end;
};

#endif // TIMEMEASUREMENT_H