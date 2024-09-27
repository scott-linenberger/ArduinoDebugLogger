#ifndef DEBUG_LOGGER_H
#define DEBUG_LOGGER_H
#include <Arduino.h>

class DebugLogger {
  private:
    bool _isLogging;

  public: 
    DebugLogger(bool isLogging): _isLogging(isLogging){};
    
    void begin(unsigned long baudRate);
    void setLogging(bool isLogging);

    void print(const String &s);
    void print(const char *str);
    void print(int val);
    void print(unsigned int val);
    void print(long val);
    void print(unsigned long val);
    void print(float val);
    void print(double val);
    void print(char c);
    void print(boolean b);
    
    void println(const String &s);
    void println(const char *str);
    void println(int val);
    void println(unsigned int val);
    void println(long val);
    void println(unsigned long val);
    void println(float val);
    void println(double val);
    void println(char c);
    void println(boolean b);
};

#endif