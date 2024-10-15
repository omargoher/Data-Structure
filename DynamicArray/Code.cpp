#include <bits/stdc++.h>
using namespace std;

class vector
{
private:
    int size;
    int capacity;
    int *arr = nullptr;

public:
    //if the user does not input the size for the vector
    vector()
    {
        size = 0;
        capacity = 10;
        arr = new int[capacity];
    }
    
    //if the user input size for the vector
    vector(int size) : size(size)
    {
        if (size < 0)
            size = 1;
        capacity = size + 10;
        arr = new int[capacity];
    }
    
    // Returns the logic size (number items in vector)
    int get_size() { return size; }

    // Returns the real size
    int get_capacity() { return capacity; }

    // insert items to back
    void push_back(int val)
    {
        //if the array is full
        if (capacity == size)
        {
            //Double the capacity
            capacity *= 2;
            //create a new array with the new capacity
            int *new_arr = new int[capacity]{};
            //copy all items in the old_array to the new_array
            for (int i = 0; i < size; i++)
                new_arr[i] = arr[i];
            //delete all copied items in the old array
            delete[] arr;
            //arr pointer points to the new array
            arr = new_arr;
        }
        //add the new the item
        arr[size] = val;
        // increment the size
        ++size;
    }

    // delete items to back
    void pop_back()
    {
        // actually we do not delete items just decrement the size
        //If size = 0 can't decrement the sizeو because the size will be negative!!
        if(size > 0){
            // Decrement the size
            --size;
            // change value of the item need to delete .. you can don't do that 
            arr[size] = 0;
        }
        else{
            // clean memory
            delete[] arr;
            // change the value of the capacity because if we need to push_back items again 
            capacity = 1;
        }
    }

    // set value at the index (change value in the index)
    void set_in(int val, int idx)
    {
        if(idx < size && idx >= 0){
            arr[idx] = val;
        }
    }
    
    // get value 
    int get_from(int idx)
    {
        if(idx >= 0 && idx < size)
            return arr[idx];
    }

    //Insert an item at an index
    void insert_at(int val, int idx)
    {
        if(idx >= 0 && idx < size){
            //if the array is full
            if (capacity == size)
            {
                //Double the capacity
                capacity *= 2;
                //create a new array with the new capacity
                int *new_arr = new int[capacity]{};
                //copy all items in the old_array to the new_array
                for (int i = 0; i < size; i++)
                    new_arr[i] = arr[i];
                //delete all copied items in the old array
                delete[] arr;
                //arr pointer points to the new array
                arr = new_arr;
            }
            //change data 
            for (int i = size; i > idx; --i)
            {
                arr[i] = arr[i - 1];
            }
            //insert the new item
            arr[idx] = val;
            // increment the size
            ++size;
        }
    }  

    // delete an item at an index
    void delete_at(int idx)
    {
        if(idx < size && idx >= 0){
            // change data
            for (int i = idx; i < size-1; ++i)
                arr[i] = arr[i+1];
            //Change the value of the last item to 0
            arr[size-1] = 0;
            // Decrement the size
            --size;
        }
    }
    
    //Print all vector
    void print()
    {
        for (int i = 0; i < size; ++i)
            cout << arr[i] << "\n";
    }  

    //Check if the vector is empty
    bool is_empty()
    {
        return size==0;
    }

};
