#ifndef LOGGING_H
#define LOGGING_H

#include <sstream>
class Logger {
 public:
  Logger(const std::string& file, int lno) {
    stream_ << file << ":" << lno << ": ";
  }
  ~Logger() { std::cout << stream_.str() << std::endl; }

  std::ostringstream& stream() { return stream_; }

 private:
  std::ostringstream stream_;
};
#define LOG Logger(__FILE__, __LINE__).stream()
#endif  // LOGGING_H