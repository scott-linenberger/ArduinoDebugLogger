#include "DebugLogger.h"

void DebugLogger::begin(unsigned long _baudRate) {
  /* start Serial in case logging is enabled later */
  if (_baudRate > 0) {
    Serial.begin(_baudRate);
  } else {
    Serial.begin(115200);
  }
  delay(100); // 100ms blocking delay for Serial to start
}

void DebugLogger::setLogging(bool isLogging) {
  _isLogging = isLogging;
}

void DebugLogger::print(const String &s) {
  if (!_isLogging) {
    return;
  }
  Serial.print(s);
}

void DebugLogger::print(const char *str) {
  if (!_isLogging) {
    return;
  }
  Serial.print(str);
}

void DebugLogger::print(int val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(unsigned int val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(long val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(unsigned long val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(float val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(double val) {
  if (!_isLogging) {
    return;
  }
  Serial.print(val);
}

void DebugLogger::print(char c) {
  if (!_isLogging) {
    return;
  }
  Serial.print(c);
}

void DebugLogger::print(boolean b) {
  if (!_isLogging) {
    return;
  }
  Serial.print(b);
}

void DebugLogger::println(const String &s) {
  if (!_isLogging) {
    return;
  }
  Serial.println(s);
}

void DebugLogger::println(const char *str) {
  if (!_isLogging) {
    return;
  }
  Serial.println(str);
}

void DebugLogger::println(int val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(unsigned int val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(long val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(unsigned long val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(float val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(double val) {
  if (!_isLogging) {
    return;
  }
  Serial.println(val);
}

void DebugLogger::println(char c) {
  if (!_isLogging) {
    return;
  }
  Serial.println(c);
}

void DebugLogger::println(boolean b) {
  if (!_isLogging) {
    return;
  }
  Serial.println(b);
}