# Serial Print

Afisare numere pe o singura linie.

```cpp
  char buffer[50];  // Allocate enough space
  sprintf(buffer, "X = %d Y = %d SW = %d", xVal, yVal, buttonStatus);
  Serial.println(buffer);
```

```
X = 535 Y = 541 SW = 0
X = 545 Y = 549 SW = 0
X = 533 Y = 5 SW = 0
X = 36 Y = 540 SW = 0
```

Afisare numere cu formatare cu spatiu.

```cpp
  char buffer[50];  // Allocate enough space
  sprintf(buffer, "X = %4d Y = %4d SW = %4d", xVal, yVal, buttonStatus);
  Serial.println(buffer);
```

```
X =  535 Y =  541 SW =    0
X =  545 Y =  549 SW =    0
X =   33 Y =   40 SW =    0
X =    6 Y =    0 SW =    0
```

Afisare numere cu formatare cu 0-uri.

```cpp
  char buffer[50];  // Allocate enough space
  sprintf(buffer, "X = %04d Y = %04d SW = %04d", xVal, yVal, buttonStatus);
  Serial.println(buffer);
```

```
X = 0535 Y = 0541 SW = 0000
X = 0545 Y = 0549 SW = 0000
X = 0533 Y = 0540 SW = 0000
X = 0536 Y = 0540 SW = 0000
```
