# Memory :)
- **Stack** 
    - **Stack memory** is a region of memory that is used for storing variables and function calls in a Last In First Out (LIFO) manner. It's a special memory area where data is added and removed in a specific order, meaning that the last piece of data that was added (pushed) is the first one to be removed (popped).
    - **Automatic Memory Management**   
        - Stack memory is managed automatically by the operating system. Each time a function is called, memory is allocated for the local variables, and when the function returns, that memory is automatically freed.

    - **Fixed Size and Limited**
        - Stack memory has a fixed size (defined when the program starts), making it relatively small compared to heap memory If the stack runs out of memory (due to deep recursion or large local variables), a stack overflow occurs, causing the program to crash.
    - **Fast Access**
        - Accessing stack memory is very fast because memory is tightly organized, and the next location is always on the top of the stack. 
        This speed makes it ideal for storing short-lived data like local variables.
    
    - **Advantages & Disadvantages** 
        - **Advantages of Stack Memory:**
            - **Fast:** Stack memory allocation and deallocation are very quick.
            - **Efficient:** Automatic memory management simplifies programming.
            - **Safe:** Memory is freed automatically once a function exits, reducing the risk of memory leaks.
        - **Disadvantages of Stack Memory:**
            - **Limited Size:** Stack memory is relatively small and can lead to a stack overflow in cases of deep recursion.
            - **Short-Lived:** Variables in the stack exist only as long as the function is executing.
- **Heap** (dynamic memory allocation)
    - used for *dynamic memory allocation*, where variables are allocated and deallocated manually by the programmer during runtime. 
    - Memory in the heap needs to be manually managed. You must explicitly allocate memory (using `new` in C++) and deallocate it (using `delete` in C++).
    - You can access memory in the heap as long as you have a pointer to it. Memory allocation is non-linear and can be accessed at any time until you free it.
    - **Why Use it ??**
        - When you need to allocate memory at runtime (rather than at compile time), you use the heap. This is common when:
            1. You don’t know the size of the data.
            2. You need the data to persist after a function has exited
    - **Advantages & Disadvantages**
        - **Advantages**
            - **Flexibility**: You can dynamically allocate memory of any size at runtime.
            - **Persistence**: Heap-allocated memory persists until you manually free it. It’s not automatically deallocated like stack memory.
        - **Disadvantages**
            - **Manual Management:** You have to manually allocate and deallocate memory. Failing to do so leads to memory leaks.
            - **Slower Access:** Accessing heap memory is slower compared to stack memory because the heap is larger and more complex to manage.

# Pointer
### What is the Pointer ?
- **Pointer -->** a variable that stores the memory address of another variable.
- **Imagine**
    - ***House Address and Letter***
        Imagine you're writing a letter to a friend. You don't directly give them the house, but instead, you write down the address of the house where they live. With that address, they can visit the house, see what's inside, or even make changes to the house if needed.
        ![Untitled](PointerEx.webp)
        - Code
            ```cpp
            #include <iostream>
            using namespace std;

            int main() {
                // The house holds the value 42
                int house = 42; 
                // The address stores the location of the house         
                int* address = &house;   

                
                cout << "House value: " << house << endl;// Output: 42           
                cout << "Address of house: " << address << endl;// Prints the memory address    
                cout << "Value at address: " << *address << endl;// Output: 42 (dereferencing the pointer)   

                // Modifying the value via the pointer
                *address = 100;
                cout << "New house value: " << house << endl;// Output: 100       

                return 0;
            }
            ```
### Pointer Declaration and Initialization
- How to declare a pointer `int* ptr;`
- How to initialize a pointer `ptr = &var;`
- code
    ```cpp
    int num = 10;
    // ptr stores the address of num
    int* ptr = &num;  
    ```
### Dereferencing a Pointer
- The dereference operator (*), which accesses the value stored at the memory address the pointer holds.
- code
    ```cpp
    int num = 10;
    int* ptr = &num;
    cout << *ptr;  // Outputs 10
    ```
### Pointers and Arrays
```cpp
int arr[] = {10, 20, 30};
int* ptr = arr;  // Equivalent to int* ptr = &arr[0];
cout << *(arr);  // Outputs 10
cout << *(ptr);  // Outputs 10
cout << *(ptr + 1);  // Outputs 20
cout << *(ptr + 2);  // Outputs 30
```
### Null Pointers
- that pointers can be assigned the special **nullptr** value (or **NULL** in older C++), which represents that the pointer points to ***"nothing"***.
- code
    ```cpp
    int* ptr = nullptr;
    ```
### Dynamic Memory Allocation
- Store Data in Heap (Dynamic Memory)
    ```cpp
    // Allocates memory for an integer
    int* ptr = new int(10);
    cout<< *ptr; // output 10
    // Frees the memory
    delete ptr;
    ```

    ```cpp
    int n;
    cin>>n;
    // Dynamically allocate an array of size n
    int* ptr = new int[n];
    // Free the dynamically allocated array
    delete[] ptr;
    ```
# Pointer Size Based on System Architecture
```cpp
int value = 42;
int* ptr = &value;
```
- In a 32-bit architecture, pointers are stored as 4 bytes (32 bits).
    | Memory Address | Value   |
    |----------------|---------|
    | 0x0012FF7C     | 42      | 
    | 0x0012FF80     | 0x0012FF7C |

- In a 64-bit architecture, pointers are stored as 8 bytes (64 bits).
    | Memory Address | Value   |
    |----------------|---------|
    | 0x00007FFD55B6A2C0 | 42  | 
    | 0x00007FFD55B6A2C8 | 0x00007FFD55B6A2C0 |

# Struct
- A struct (short for structure) in C++ is a user-defined data type that allows the grouping of variables of different types under a single name. It is primarily used to represent a record or a complex data type.
    - **Syntax**
        ```cpp
        struct StructName {
            // Member variables
            dataType member1;
            dataType member2;
            // ...
        };
        ```
- The members of a struct are laid out in memory in the order they are declared.
    ```cpp
    struct Example {
        char a;    // 1 byte
        int b;     // 4 bytes
        float c;   // 4 bytes
    };
    ```

- Example
    ```cpp
    #include <iostream>
    using namespace std;

    // Define a struct named 'Student'
    struct Student {
        string name;
        int year;      
        float GPA; 
    };

    int main() {
        // Create an instance of Student
        Student student1;

        // Assign values to the members
        student1.name = "Omar Goher";
        student1.year = 2;
        student1.GPA = 3.5;

        // Access and display the values
        cout << "Name: " << student1.name << endl;    // Outputs: Name: Omar Goher
        cout << "Year: " << student1.year << endl;      // Outputs: Year: 3
        cout << "GPA: " << student1.GPA << endl; // Outputs: GPA: 3.5

        return 0;
    }
    ```