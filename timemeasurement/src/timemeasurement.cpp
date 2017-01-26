#include "timemeasurement.h"
#include <chrono>

Timemeasurement::Timemeasurement()
{}

Timemeasurement::~Timemeasurement()
{}

void Timemeasurement::start_time()
{
  start = std::chrono::system_clock::now();
}

void Timemeasurement::stop_time()
{
  end = std::chrono::system_clock::now();
}

long int Timemeasurement::get_microsec_time()
{
  return std::chrono::duration_cast<std::chrono::microseconds>(end-start).count();
}

