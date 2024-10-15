# DataTypes
## **Primitive Data Types**
- The basic data types that are predefined by the language. These types represent the simplest form of data and are not objects or classes. They are used to store simple values like numbers, characters, and booleans. Primitive types have a fixed size in memory, making them efficient for storage and processing.


### int (Integer) 
- Stores whole numbers
- Size -> 4 bytes (32 bits)
- Range -> -2<sup>31</sup> to 2<sup>31</sup> - 1 
- Example
    ```cpp
    #include <iostream>
    using namespace std;
    int main() {
        int x = 10;
        int y = -5;
        cout << "x = " << x << ", y = " << y << endl;
        return 0;
    }
    ```



### Float & Double
| Float | Double |
|-------|--------|
|Size -> 4 bytes | Size -> 8 bytes |
|Precision -> Up to 7 decimal digits | Precision -> Up to 15-16 decimal digits | 
- Example
    ```cpp
    #include <iostream>
    using namespace std;
    int main() {
        double x = 9.80665;
                cout << "x: " << x << endl;
                return 0;
            }
    ```



### char (Character)
- Store a Single Character
- Size -> 1 byte
- Range -> 0 to 255 in ASCII
- ASCII
    - The ASCII (American Standard Cod for Information Interchange) 
    ### ASCII Table Overview
    | Decimal | Hex  | Character | Description                 |
    |---------|------|-----------|-----------------------------|
    | 0       | 00   | NUL       | Null character              |
    | 1       | 01   | SOH       | Start of Heading            |
    | 2       | 02   | STX       | Start of Text               |
    | 3       | 03   | ETX       | End of Text                 |
    | 4       | 04   | EOT       | End of Transmission         |
    | 5       | 05   | ENQ       | Enquiry                     |
    | 6       | 06   | ACK       | Acknowledgment              |
    | 7       | 07   | BEL       | Bell                        |
    | 8       | 08   | BS        | Backspace                   |
    | 9       | 09   | TAB       | Horizontal Tab              |
    | 10      | 0A   | LF        | Line Feed                   |
    | 11      | 0B   | VT        | Vertical Tab                |
    | 12      | 0C   | FF        | Form Feed                   |
    | 13      | 0D   | CR        | Carriage Return              |
    | 14      | 0E   | SO        | Shift Out                   |
    | 15      | 0F   | SI        | Shift In                    |
    | 16      | 10   | DLE       | Data Link Escape            |
    | 17      | 11   | DC1       | Device Control 1            |
    | 18      | 12   | DC2       | Device Control 2            |
    | 19      | 13   | DC3       | Device Control 3            |
    | 20      | 14   | DC4       | Device Control 4            |
    | 21      | 15   | NAK       | Negative Acknowledgment      |
    | 22      | 16   | SYN       | Synchronize                |
    | 23      | 17   | ETB       | End of Transmission Block   |
    | 24      | 18   | CAN       | Cancel                      |
    | 25      | 19   | EM        | End of Medium               |
    | 26      | 1A   | SUB       | Substitute                  |
    | 27      | 1B   | ESC       | Escape                      |
    | 28      | 1C   | FS        | File Separator              |
    | 29      | 1D   | GS        | Group Separator             |
    | 30      | 1E   | RS        | Record Separator            |
    | 31      | 1F   | US        | Unit Separator              |
    | 32      | 20   | (space)   | Space                       |
    | 33      | 21   | !         | Exclamation mark            |
    | 34      | 22   | "         | Double quotes               |
    | 35      | 23   | #         | Number sign                 |
    | 36      | 24   | $         | Dollar sign                 |
    | 37      | 25   | %         | Percent sign                |
    | 38      | 26   | &         | Ampersand                   |
    | 39      | 27   | '         | Single quote                |
    | 40      | 28   | (         | Left parenthesis            |
    | 41      | 29   | )         | Right parenthesis           |
    | 42      | 2A   | *         | Asterisk                    |
    | 43      | 2B   | +         | Plus sign                   |
    | 44      | 2C   | ,         | Comma                       |
    | 45      | 2D   | -         | Hyphen                      |
    | 46      | 2E   | .         | Period                      |
    | 47      | 2F   | /         | Slash                       |
    | 48      | 30   | 0         | Digit 0                     |
    | 49      | 31   | 1         | Digit 1                     |
    | 50      | 32   | 2         | Digit 2                     |
    | 51      | 33   | 3         | Digit 3                     |
    | 52      | 34   | 4         | Digit 4                     |
    | 53      | 35   | 5         | Digit 5                     |
    | 54      | 36   | 6         | Digit 6                     |
    | 55      | 37   | 7         | Digit 7                     |
    | 56      | 38   | 8         | Digit 8                     |
    | 57      | 39   | 9         | Digit 9                     |
    | 58      | 3A   | :         | Colon                       |
    | 59      | 3B   | ;         | Semicolon                   |
    | 60      | 3C   | <         | Less than                   |
    | 61      | 3D   | =         | Equal sign                  |
    | 62      | 3E   | >         | Greater than                |
    | 63      | 3F   | ?         | Question mark               |
    | 64      | 40   | @         | At sign                     |
    | 65      | 41   | A         | Uppercase A                 |
    | 66      | 42   | B         | Uppercase B                 |
    | 67      | 43   | C         | Uppercase C                 |
    | 68      | 44   | D         | Uppercase D                 |
    | 69      | 45   | E         | Uppercase E                 |
    | 70      | 46   | F         | Uppercase F                 |
    | 71      | 47   | G         | Uppercase G                 |
    | 72      | 48   | H         | Uppercase H                 |
    | 73      | 49   | I         | Uppercase I                 |
    | 74      | 4A   | J         | Uppercase J                 |
    | 75      | 4B   | K         | Uppercase K                 |
    | 76      | 4C   | L         | Uppercase L                 |
    | 77      | 4D   | M         | Uppercase M                 |
    | 78      | 4E   | N         | Uppercase N                 |
    | 79      | 4F   | O         | Uppercase O                 |
    | 80      | 50   | P         | Uppercase P                 |
    | 81      | 51   | Q         | Uppercase Q                 |
    | 82      | 52   | R         | Uppercase R                 |
    | 83      | 53   | S         | Uppercase S                 |
    | 84      | 54   | T         | Uppercase T                 |
    | 85      | 55   | U         | Uppercase U                 |
    | 86      | 56   | V         | Uppercase V                 |
    | 87      | 57   | W         | Uppercase W                 |
    | 88      | 58   | X         | Uppercase X                 |
    | 89      | 59   | Y         | Uppercase Y                 |
    | 90      | 5A   | Z         | Uppercase Z                 |
    | 91      | 5B   | [         | Left bracket                |
    | 92      | 5C   | \         | Backslash                   |
    | 93      | 5D   | ]         | Right bracket               |
    | 94      | 5E   | ^         | Caret                       |
    | 95      | 5F   | _         | Underscore                  |
    | 96      | 60   | `         | Grave accent                |
    | 97      | 61   | a         | Lowercase a                 |
    | 98      | 62   | b         | Lowercase b                 |
    | 99      | 63   | c         | Lowercase c                 |
    | 100     | 64   | d         | Lowercase d                 |
    | 101     | 65   | e         | Lowercase e                 |
    | 102     | 66   | f         | Lowercase f                 |
    | 103     | 67   | g         | Lowercase g                 |
    | 104     | 68   | h         | Lowercase h                 |
    | 105     | 69   | i         | Lowercase i                 |
    | 106     | 6A   | j         | Lowercase j                 |
    | 107     | 6B   | k         | Lowercase k                 |
    | 108     | 6C   | l         | Lowercase l                 |
    | 109     | 6D   | m         | Lowercase m                 |
    | 110     | 6E   | n         | Lowercase n                 |
    | 111     | 6F   | o         | Lowercase o                 |
    | 112     | 70   | p         | Lowercase p                 |
    | 113     | 71   | q         | Lowercase q                 |
    | 114     | 72   | r         | Lowercase r                 |
    | 115     | 73   | s         | Lowercase s                 |
    | 116     | 74   | t         | Lowercase t                 |
    | 117     | 75   | u         | Lowercase u                 |
    | 118     | 76   | v         | Lowercase v                 |
    | 119     | 77   | w         | Lowercase w                 |
    | 120     | 78   | x         | Lowercase x                 |
    | 121     | 79   | y         | Lowercase y                 |
    | 122     | 7A   | z         | Lowercase z                 |
    | 123     | 7B   | {         | Left brace                  |
    | 124     | 7C   | \|        | Vertical bar                |
    | 125     | 7D   | }         | Right brace                 |
    | 126     | 7E   | ~         | Tilde                       |
    | 127     | 7F   | DEL       | Delete                      |
    | 128     | 80   | Ç         | Capital C with cedilla        |
    | 129     | 81   | ü         | Small u with diaeresis       |
    | 130     | 82   | é         | Small e with acute            |
    | 131     | 83   | â         | Small a with circumflex       |
    | 132     | 84   | ä         | Small a with diaeresis       |
    | 133     | 85   | à         | Small a with grave            |
    | 134     | 86   | å         | Small a with ring             |
    | 135     | 87   | ç         | Small c with cedilla          |
    | 136     | 88   | ê         | Small e with circumflex       |
    | 137     | 89   | ë         | Small e with diaeresis       |
    | 138     | 8A   | è         | Small e with grave            |
    | 139     | 8B   | ï         | Small i with diaeresis       |
    | 140     | 8C   | î         | Small i with circumflex       |
    | 141     | 8D   | ì         | Small i with grave            |
    | 142     | 8E   | Ä         | Capital A with diaeresis      |
    | 143     | 8F   | Å         | Capital A with ring           |
    | 144     | 90   | É         | Capital E with acute          |
    | 145     | 91   | æ         | Lowercase ae                  |
    | 146     | 92   | Æ         | Uppercase AE                  |
    | 147     | 93   | ô         | Small o with circumflex       |
    | 148     | 94   | ö         | Small o with diaeresis       |
    | 149     | 95   | ò         | Small o with grave            |
    | 150     | 96   | û         | Small u with circumflex       |
    | 151     | 97   | ù         | Small u with grave            |
    | 152     | 98   | ÿ         | Small y with diaeresis       |
    | 153     | 99   | Ö         | Capital O with diaeresis     |
    | 154     | 9A   | Ü         | Capital U with diaeresis     |
    | 155     | 9B   | ø         | Small o with stroke           |
    | 156     | 9C   | £         | British Pound Sign            |
    | 157     | 9D   | Ø         | Capital O with stroke         |
    | 158     | 9E   | ×         | Multiplication sign           |
    | 159     | 9F   | ƒ         | Florin                       |
    | 160     | A0   | (non-breaking space) | Non-breaking space |
    | 161     | A1   | ¡         | Inverted exclamation mark     |
    | 162     | A2   | ¢         | Cent sign                    |
    | 163     | A3   | £         | Pound sign                   |
    | 164     | A4   | ¥         | Yen sign                     |
    | 165     | A5   | ¦         | Broken bar                   |
    | 166     | A6   | §         | Section sign                 |
    | 167     | A7   | ¨         | Diaeresis (two dots)        |
    | 168     | A8   | ©         | Copyright sign               |
    | 169     | A9   | ®         | Registered sign              |
    | 170     | AA   | ¬         | Not sign                     |
    | 171     | AB   | ½         | One-half                     |
    | 172     | AC   | ¼         | One-quarter                  |
    | 173     | AD   | ¡         | Inverted exclamation mark     |
    | 174     | AE   | ¾         | Three-quarters               |
    | 175     | AF   | ¶         | Pilcrow sign                 |
    | 176     | B0   | •         | Bullet                       |
    | 177     | B1   | ¨         | Diaeresis                   |
    | 178     | B2   | ¹         | Superscript one              |
    | 179     | B3   | ²         | Superscript two              |
    | 180     | B4   | ³         | Superscript three            |
    | 181     | B5   | ´         | Acute accent                 |
    | 182     | B6   | µ         | Micro sign                   |
    | 183     | B7   | ¶         | Pilcrow sign                 |
    | 184     | B8   | ·         | Middle dot                   |
    | 185     | B9   | ¹         | Superscript one              |
    | 186     | BA   | º         | Masculine ordinal indicator   |
    | 187     | BB   | »         | Right angle quotation mark    |
    | 188     | BC   | ¼         | One-quarter                  |
    | 189     | BD   | ½         | One-half                     |
    | 190     | BE   | ¾         | Three-quarters               |
    | 191     | BF   | ¿         | Inverted question mark        |
    | 192     | C0   | À         | Capital A with grave         |
    | 193     | C1   | Á         | Capital A with acute         |
    | 194     | C2   | Â         | Capital A with circumflex    |
    | 195     | C3   | Ã         | Capital A with tilde         |
    | 196     | C4   | Ä         | Capital A with diaeresis     |
    | 197     | C5   | Å         | Capital A with ring          |
    | 198     | C6   | Æ         | Capital AE                   |
    | 199     | C7   | Ç         | Capital C with cedilla       |
    | 200     | C8   | È         | Capital E with grave         |
    | 201     | C9   | É         | Capital E with acute         |
    | 202     | CA   | Ê         | Capital E with circumflex    |
    | 203     | CB   | Ë         | Capital E with diaeresis     |
    | 204     | CC   | Ì         | Capital I with grave         |
    | 205     | CD   | Í         | Capital I with acute         |
    | 206     | CE   | Î         | Capital I with circumflex     |
    | 207     | CF   | Ï         | Capital I with diaeresis     |
    | 208     | D0   | Ð         | Capital Eth (Icelandic)      |
    | 209     | D1   | Ñ         | Capital N with tilde         |
    | 210     | D2   | Ò         | Capital O with grave         |
    | 211     | D3   | Ó         | Capital O with acute         |
    | 212     | D4   | Ô         | Capital O with circumflex    |
    | 213     | D5   | Õ         | Capital O with tilde         |
    | 214     | D6   | Ö         | Capital O with diaeresis     |
    | 215     | D7   | ×         | Multiplication sign          |
    | 216     | D8   | Ø         | Capital O with stroke        |
    | 217     | D9   | Ù         | Capital U with grave         |
    | 218     | DA   | Ú         | Capital U with acute         |
    | 219     | DB   | Û         | Capital U with circumflex    |
    | 220     | DC   | Ü         | Capital U with diaeresis     |
    | 221     | DD   | Ý         | Capital Y with acute         |
    | 222     | DE   | Þ         | Capital Thorn (Icelandic)    |
    | 223     | DF   | ß         | Small sharp s                |
    | 224     | E0   | à         | Small a with grave           |
    | 225     | E1   | á         | Small a with acute           |
    | 226     | E2   | â         | Small a with circumflex      |
    | 227     | E3   | ã         | Small a with tilde           |
    | 228     | E4   | ä         | Small a with diaeresis       |
    | 229     | E5   | å         | Small a with ring            |
    | 230     | E6   | æ         | Lowercase ae                 |
    | 231     | E7   | ç         | Small c with cedilla         |
    | 232     | E8   | è         | Small e with grave           |
    | 233     | E9   | é         | Small e with acute           |
    | 234     | EA   | ê         | Small e with circumflex      |
    | 235     | EB   | ë         | Small e with diaeresis       |
    | 236     | EC   | ì         | Small i with grave           |
    | 237     | ED   | í         | Small i with acute           |
    | 238     | EE   | î         | Small i with circumflex      |
    | 239     | EF   | ï         | Small i with diaeresis       |
    | 240     | F0   | ð         | Small eth (Icelandic)        |
    | 241     | F1   | ñ         | Small n with tilde           |
    | 242     | F2   | ò         | Small o with grave           |
    | 243     | F3   | ó         | Small o with acute           |
    | 244     | F4   | ô         | Small o with circumflex      |
    | 245     | F5   | õ         | Small o with tilde           |
    | 246     | F6   | ö         | Small o with diaeresis       |
    | 247     | F7   | ÷         | Division sign                |
    | 248     | F8   | ø         | Small o with stroke          |
    | 249     | F9   | ù         | Small u with grave           |
    | 250     | FA   | ú         | Small u with acute           |
    | 251     | FB   | û         | Small u with circumflex      |
    | 252     | FC   | ü         | Small u with diaeresis       |
    | 253     | FD   | ý         | Small y with acute           |
    | 254     | FE   | þ         | Small thorn (Icelandic)      |
    | 255     | FF   | ÿ         | Small y with diaeresis       |

    ### How to Use the ASCII Table:
    - Each character corresponds to a unique decimal and hexadecimal value.
    - You can convert characters to their numeric representations and vice versa using this table.
    - Commonly used in programming, data transmission, and other computing applications to ensure that systems can interpret and manipulate text consistently.

    ### Example in C++:
    You can easily print the ASCII value of a character in C++:
    ```cpp
    #include <iostream>
    using namespace std;
        int main() {
            char ch = 'A';
            cout << "ASCII value of " << ch << " is " << int(ch) << endl;
            return 0;
        }
    ```
    - This program will output: `ASCII value of A is 65`.

            
### bool (Boolen)
- Store True or False 
- Size 1 byte
- Example
    ```cpp
        #include <iostream>
        using namespace std;

        int main() {
            bool isPassed = true;
            cout << "Passed the exam: " << isPassed << endl; // Outputs 1 for true
            return 0;
        }
    ```

# Conditions
- Conditional statements allow a program to make decisions.
- **if-else**
    - Example 
        ```cpp
        if (condition) {
            // code when condition is true
        } else {
            // code when condition is false
        }
        ```

# Loops
- Loops are used to repeat code.
- **For Loop**: Repeats code a specific number of times.
    - Example
    ```cpp
    for (int i = 0; i < 5; i++) {
    // code to be repeated
    }
    ```
- **while loop**:  Repeats code as long as a condition is true.
    - Example
    ```cpp
    while (condition) {
    // code to be repeated
    }
    ```
- **do-while loop**:Same as while, but ensures code runs at least once 
    - Example
    ```cpp
    do {
        // code to be repeated
    } while (condition);
    ```

# Arrays
- An **array** is a data structure that stores a fixed-size sequential collection of elements of the same type. Arrays are used to store multiple values in a single variable, making it easier to manage collections of data.
- **Fixed Size**: The size of an array is defined at the time of declaration and cannot be changed during runtime.
- **Homogeneous Elements**: All elements in an array are of the same type (e.g., all integers, all floats, etc.).
- **Indexed Access**: Elements in an array can be accessed using their index, which usually starts from `0`.
- Example 
    - Consider an array that stores the first five positive integers:
        ```plaintext
            Index:   0   1   2   3   4
                     |   |   |   |   |
            Array: [ 1,  2,  3,  4,  5 ]
    ### Accessing Array Elements
    You can access individual elements in an array using their index:
    - `array[0]` → `1`
    - `array[1]` → `2`
    - `array[2]` → `3`
    - `array[3]` → `4`
    - `array[4]` → `5`

    ### Here’s an example of how to declare and use an array in C++:
    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int array[5] = {1, 2, 3, 4, 5}; // Declare an array of integers

        // Accessing and printing array elements
        for (int i = 0; i < 5; i++) {
            cout << "Element at index " << i << ": " << array[i] << endl;
        }

        return 0;
    }
    ```

## 1D Array:
- A single row of elements.

## 2D Array
- A **2D array** (two-dimensional array) is an array of arrays. <br>It is a data structure that can be used to represent a matrix or a table with rows and columns.
<br>Each element in a 2D array is accessed using two indices: one for the row and one for the column.

- **Rectangular Structure**: A 2D array consists of rows and columns, making it suitable for representing grid-like structures.
- **Fixed Size**: Like regular arrays, the size of a 2D array is defined at the time of declaration and cannot be changed during runtime.
- **Homogeneous Elements**: All elements in a 2D array are of the same type (e.g., all integers, all floats, etc.).
- **Indexed Access**: Elements can be accessed using their row and column indices.

    ## 2D Array Visualization
    Consider a 2D array that represents a 3x3 matrix:
    ```plaintext
          Column
            0   1   2
          +---+---+---+
    Row 0 | 1 | 2 | 3 |
          +---+---+---+
    Row 1 | 4 | 5 | 6 |
          +---+---+---+
    Row 2 | 7 | 8 | 9 |
          +---+---+---+
    ```

    ## Accessing 2D Array Element
    You can access individual elements in a 2D array using their row and column indices:

    - `array[0][0]` → `1`
    - `array[1][2]` → `6`
    - `array[2][1]` → `8`

    ### Example in C++
    Here’s an example of how to declare and use a 2D array in C++:

    ```cpp
    #include <iostream>
    using namespace std;

    int main() {
        int array[3][3] = { {1, 2, 3}, 
                            {4, 5, 6}, 
                            {7, 8, 9} 
                        }; // Declare a 3x3 2D array

        // Accessing and printing array elements
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Element at [" << i << "][" << j << "]: " << array[i][j] << endl;
            }
        }

        return 0;
    }
    ```

