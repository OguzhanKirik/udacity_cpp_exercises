#include "processor.h"
#include <string>
#include <vector>
#include "linux_parser.h"

// TODO: Return the aggregate CPU utilization
float Processor::Utilization() { 
  long total = LinuxParser::Jiffies();
  long active = LinuxParser::ActiveJiffies();
  return active * (1.f / total);
}