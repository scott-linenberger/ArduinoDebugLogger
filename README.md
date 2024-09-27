# ArduinoDebugLogger

An Arduino Debug logger with the ability to toggle Serial logging on or off for performance purposes.

ArduinoDebugLogger is a simple wrapper around `Serial.print` and `Serial.println` with a debug flag that allows you to skip printing to the console when you're not debugging to improve performance.

## Quick Start

```
#include <DebugLogger.h>

bool isLogging = true; // flip this to false to stop outputting to Serial through debugger
DebugLogger debug = DebugLogger(isLogging);

// ....

void setup() {
  debug.begin(115200); // starts Serial with baud rate of 115200
  delay(250);
}

// ...

void loop() {
    if (someBtn.isPressed()) {
        debug.println("Button pressed!");
    }

    if (sensorData) {
        debug.print("Sensor data -> ");
        debug.println(sensorData);
    }
}
```

## API REFERENCE

### `DebugLogger` - constructor

#### Description

Used to construct a new instance of the `DebugLogger`.

#### Syntax

```
DebugLogger debug = DebugLogger(isLogging);
```

#### Parameters

|     Parameter | Description                                                            |
| ------------: | ---------------------------------------------------------------------- |
| `isDebugging` | When `true`, prints to Serial. When `false`, does not print to Serial. |

### `begin` - instance method

#### Description

Used to start `Serial` for the `DebugLogger`. This method starts `Serial` regardless of the
`isLogging` flag to make it possible to conditionally enable logging without needing to
re-flash new firmware. See examples for more.

#### Syntax

```
debug.begin(115200); // starts Serial at 115200 baud
```

#### Parameters

|  Parameter | Description                                            |
| ---------: | ------------------------------------------------------ |
| `baudRate` | Starts `Serial` with the supplied `baudRate` argument. |

### `setLogging` - instance method

#### Description

Used to enable or disable Serial output.

#### Syntax

```
debug.setLogging(true); // outputs to Serial
debug.setLogging(false); // does NOT output to Serial
```

#### Parameters

|   Parameter | Description                                            |
| ----------: | ------------------------------------------------------ |
| `isLogging` | Starts `Serial` with the supplied `baudRate` argument. |

### `print` - instance method - multiple overloads

#### Description

Calls `Serial.print` if `isLogging` is `true`. Full Arduino documentation for `Serial.print` can be found [here](https://reference.arduino.cc/reference/en/language/functions/communication/serial/print/).

> Prints data to the serial port as human-readable ASCII text. This command can take many forms. Numbers are printed using an ASCII character for each digit. Floats are similarly printed as ASCII digits, defaulting to two decimal places. Bytes are sent as a single character. Characters and strings are sent as is.

#### Syntax

```
// outputs "Hello, World!"
debug.print("Hello, ");
debug.print("World);
debug.println("!");
```

#### Parameters

See [Arduino Documentation](https://reference.arduino.cc/reference/en/language/functions/communication/serial/print/).

### `println` - instance method - multiple overloads

#### Description

Calls `Serial.print` if `isLogging` is `true`. Full Arduino documentation for `Serial.println` can be found [here](https://reference.arduino.cc/reference/en/language/functions/communication/serial/println/).

> Prints data to the serial port as human-readable ASCII text followed by a carriage return character (ASCII 13, or '\r') and a newline character (ASCII 10, or '\n'). This command takes the same forms as Serial.print().

#### Syntax

```
// outputs "Hello, World!"
debug.println("Hello, World!");
```

#### Parameters

See [Arduino Documentation](https://reference.arduino.cc/reference/en/language/functions/communication/serial/println/).
